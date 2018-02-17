#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

insn_table = '../common/tables.txt'
handlers_cxx = 'handlers.cpp'

out_c = 'insn_handlers.inc'

insns = {}
debug_line = '  PRINT_DEBUG("Executed {0}\\n");\n'
handler_stub = ' {{\n  PRINT_DEBUG("Executed {0}\\n");\n  assert(0 && "Unimplemented insn");\n}}\n'
handler_decl = 'void processInsn{0}(const Types::Insn &i)'

# translation table
repl_table = [ ('GPR', 'registerMap'),
               ('rs' , 'i.rs'),
               ('rt' , 'i.rt'),
               ('rd' , 'i.rd'),
               ('imm', 'i.imm'),
               ('S.' , 'sysregs.'),
               ('.u' , '.uVal'),
               ('.s' , '.sVal'),
               ('w_t', 'word_t'),
               ('b_t', 'byte_t'),
               ('r_shift', 'arithmetic_rshift'),
               ('AccType::', 'MMU::AccType::'),
               ('memory', 'memory.get()')]

def process_line(line):
    global insns
    
    line = line.rstrip()
    matched = re.match('\w+', line)
    if matched:
        mn = matched.group()
        insns[mn] = handler_stub.format(mn)

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
    handler_body.append(debug_line.format(insn))

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

# generate definitions of handlers
def generate_cxx():
    out = open(out_c, 'w')

    for insn, body in insns.iteritems():
        out.write(handler_decl.format(insn.capitalize()))
        out.write(' ')
        for line in body:
            out.write(line)
        out.write('\n')
    out.write('\n')

    indent = '  '
    out.write('void initHandlers() {\n')
    for num, (insn, _) in enumerate(insns.iteritems()):
        insn = insn.capitalize()
        cast = 'static_cast<size_t>(OpTypes::OpType::{0})'.format(insn)
        out.write('{0}insnHandlers[{1}] = &Core<MMUTy>::processInsn{2};\n'.format(indent, cast, insn))
    out.write('}\n')

    out.close()

generate_cxx()

