#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

insn_table = '../common/tables.txt'
handlers_cxx = 'handlers.cpp'

out_c = 'insn_handlers.cpp'
out_h = 'insn_handlers.h'

insns = {}
handler_stub = ' {\n  assert(0 && "Unimplemented insn");\n}\n'
handler_decl = 'template<>\nvoid Core::processInsn<OpTraits::OpType::{0}>(const Types::Insn &i)'

# translation table
repl_table = [ ('GPR', 'registerMap'),
               ('rs' , 'i.rs'),
               ('rt' , 'i.rt'),
               ('rd' , 'i.rd'),
               ('S.' , 'sysregs.'),
               ('.u' , '.uVal'),
               ('.s' , '.sVal'),
               ('w_t', 'word_t'),
               ('b_t', 'byte_t') ]

def process_line(line):
    global insns
    
    line = line.rstrip()
    matched = re.match('\w+', line)
    if matched:
        insns[matched.group()] = handler_stub

for line in fileinput.input(insn_table):
    if line[0] != '#' and line[0] != '\n':
        process_line(line)
fileinput.close()

def extract_line(h):
    line = h.readline()
    if not line:
        print 'Unexpected end of file'
        raise BaseException
    return line

def replace_tokens(line):
    for old, new in repl_table:
        line = line.replace(old, new)
    return line

def process_def(h, insn):
    line = extract_line(h)

    while line == '\n':
        extract_line(h)

    handler_body = []

    if line != '{\n':
        print 'Expected }'
        raise BaseException
    handler_body.append(line)

    line = extract_line(h)
    while line != '}\n':
        handler_body.append(replace_tokens(line))
        line = extract_line(h)
    handler_body.append(line)

    insns[insn] = handler_body

def process_handlers():
    h = open(handlers_cxx, 'r')
    
    line = h.readline()
    while line:
        if line != '\n':
            line = line.rstrip()
            defm = re.match('(\w+):$', line)
            if defm:
                insn = defm.group(1)
                if insn not in insns:
                    print 'Unknown insn {0}'.format(insn)
                process_def(h, defm.group(1))

        line = h.readline()

    h.close()

process_handlers()

# generate declarations of handlers
def generate_h():
    out = open(out_h, 'w')

    out.write('#ifndef SIM_MIPS32_GENERATED_HANDLERS_H__\n')
    out.write('#define SIM_MIPS32_GENERATED_HANDLERS_H__\n\n')

    out.write('#include "core.h"\n')
    out.write('#include "common/insn.h"\n')
    out.write('\n')
    out.write('namespace Simulator {\n\n')
    out.write('namespace Core {\n\n')

    for insn in insns.iterkeys():
        out.write(handler_decl.format(insn.capitalize()))
        out.write(';\n')
    out.write('\n')

    out.write('} //namespace Core\n\n')
    out.write('} //namespace Simulator\n\n')

    out.write('#endif\n\n')

    out.close()

# generate definitions of handlers
def generate_cxx():
    out = open(out_c, 'w')

    out.write('#include "core.h"\n')
    out.write('#include "common/insn.h"\n')
    out.write('\n')
    out.write('namespace Simulator {\n\n')
    out.write('namespace Core {\n\n')

    for insn, body in insns.iteritems():
        out.write(handler_decl.format(insn.capitalize()))
        out.write(' ')
        for line in body:
            out.write(line)
        out.write('\n')
    out.write('\n')

    indent = '  '
    out.write('void Core::initHandlers() {\n')
    for num in range(0, len(insns)):
        cast = 'static_cast<OpTraits::OpType>({0})'.format(num)
        out.write('{0}insnHandlers[{1}] = &Core::processInsn<{2}>;\n'.format(indent, num, cast))
    out.write('}\n')

    out.write('} //namespace Core\n\n')
    out.write('} //namespace Simulator\n\n')

    out.close()
    
generate_h()
generate_cxx()

