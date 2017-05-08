#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

sysreg_descr = 'sysregs.txt'
out_h = 'sysregs.h'
out_decl_h = 'sysreg_decl.h'
out_cxx = 'sysregs.cpp'

# list of tuples (regnum, regsel, regname, regfields)
# regfields is list of tuples (fname, list of (fbegin, fend, facc, finit))
sysregs = []
regnum = 0
regsel = 0
realregnum = 0

def parse_fields(fields):
    fields = fields.split(';')
    retval = []
    for field in fields:
        fmatch = re.match('(\w+)(.*)', field)
        fposs = fmatch.group(2).split('|')
        fprop = []
        for fpos in fposs:
            fpmatch = re.match('\[(\d+):(\d+)\]\((\w+),(.*)\)', fpos)
            fprop.append((int(fpmatch.group(2)), int(fpmatch.group(1)),
                          fpmatch.group(3),fpmatch.group(4)))
        retval.append((fmatch.group(1),fprop))

    return retval
    
def parse_reg(line):
    global regnum
    global regsel
    global realregnum

    if line[0] == '!':
        regnum += 1
        regsel = 0
        return
    
    reg_match = re.match('\+?(\w+)\s+(.*)', line)
    if line[0] == '+':
        regsel += 1
        regnum -= 1
    sysregs.append((regnum, regsel, reg_match.group(1), parse_fields(reg_match.group(2))))
    if line[0] != '+':
        regsel = 0
    regnum += 1
    realregnum += 1

for line in fileinput.input(sysreg_descr):
    if line != '\n' and line[0] != '#':
        parse_reg(line.strip())
fileinput.close()

def fill_header():
    global realregnum
    global regnum

    h = open(out_h,'w')
    h.write('#ifndef SIM_MIPS32_GENERATED_SYSREG_HEADER__\n')
    h.write('#define SIM_MIPS32_GENERATED_SYSREG_HEADER__\n\n')

    indent = '  '
    h.write('{0}enum class RegIndex {{\n'.format(indent))

    indent = '    '
    for regno, regse, regname, regfields in sysregs:
        h.write('{0}{1} = {2},\n'.format(indent, regname, regno))

    h.write('{0}SysregNum = {1},\n'.format(indent, regnum))
    h.write('{0}ImplNum = {1},\n'.format(indent, realregnum))
    indent = '  '
    h.write('{0}{1}'.format(indent, '};\n\n'))

    for _, _, regname, regfields in sysregs:
        indent = '  '
        h.write('{0}struct {{\n'.format(indent))
        indent = '    '
        for fname, _ in regfields:
            if fname != '0' and fname != 'R':
                h.write('{0}uword_t {1};\n'.format(indent, fname))
        indent = '  '
        h.write('{0}}} {1};\n\n'.format(indent,regname))

    h.write('#endif\n')
    h.close()

    h = open(out_decl_h, 'w')
    h.write('#ifndef SIM_MIPS32_GENERATED_SYSREG_DECL_HEADER__\n')
    h.write('#define SIM_MIPS32_GENERATED_SYSREG_DECL_HEADER__\n\n')

    for regnum, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid Core::sysregInit<Core::SR::RegIndex::{0}, {1}>();\n'.format(regname, regsel))
    for regnum, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid Core::sysregWrite<Core::SR::RegIndex::{0}, {1}>(const Insn &);\n'.format(regname, regsel))
    for regnum, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid Core::sysregRead<Core::SR::RegIndex::{0}, {1}>(const Insn &);\n'.format(regname, regsel))


    h.write('\n#endif\n')
    h.close()


def fill_init(s):
    indent = '  '

    for regnum, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid Core::sysregInit<Core::SR::RegIndex::{0}, {1}>() {{\n'.format(regname, regsel))
        for fname, fprops in regfields:
            if fname == '0' or fname == 'R':
                continue
                
            if len(fprops) > 1:
                fprops.reverse()
                curpos = 0
                val = ''
                s.write('{0}sysregs.{1}.{2} = 0;\n'.format(indent, regname, fname))
                for begin, end, _, init in fprops:
                    flen = end - begin + 1
                    mask = ~(~0 << (flen)) << curpos
                    if init == 'U':
                        val = str(-1 & mask)
                    else:
                        val = init
                    s.write('{0}sysregs.{1}.{2} |= {3};\n'.format(indent, regname, fname, val))
                    curpos += flen
                fprops.reverse()
            else:
                begin, end, _, val = fprops[0]
                if val == 'U':
                    val = str(-1)
                s.write('{0}sysregs.{1}.{2} = {3};\n'.format(indent, regname, fname, val))

        s.write('}\n\n')

    s.write('void Core::initSysregs() {\n')
    for _, regsel, regname, _ in sysregs:
        s.write('{0}sysregInit<SR::RegIndex::{1}, {2}>();\n'.format(indent,regname,regsel))
    s.write('}\n\n')

def fill_write(s):
    for regnum, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid Core::sysregWrite<Core::SR::RegIndex::{0}, {1}>(const Insn &i) {{\n'.format(regname, regsel))

        indent = '  '
        curpos = 32
        s.write('{0}uword_t val = registerMap[i.rt].uVal;\n'.format(indent))
        for fname, fprops in regfields:
            for begin, end, acc, _ in fprops:
                flen = end - begin + 1
                endpos = curpos - flen
                if acc == 'RW':
                    mask = ~(~0 << flen) << endpos
                    s.write('{0}sysregs.{1}.{2} = (val & {3:#x}) >> {4};\n'.format(indent,regname,fname,mask,endpos))
                curpos = endpos

        s.write('}\n\n')

def fill_read(s):
    for regnum, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid Core::sysregRead<Core::SR::RegIndex::{0}, {1}>(const Insn &i) {{\n'.format(regname, regsel))

        indent = '  '
        s.write('{0}uword_t val = 0;\n'.format(indent))
        curpos = 32
        for fname, fprops in regfields:
            for begin, end, acc, _ in fprops:
                flen = end - begin + 1
                endpos = curpos - flen
                if fname != 'R' and fname != '0' and (acc == 'RW' or acc == 'R'):
                    # mask = ~(~0 << flen) << endpos
                    s.write('{0}val |= sysregs.{1}.{2} << {3};\n'.format(indent,regname,fname,endpos))
                curpos = endpos
        s.write('{0}registerMap[i.rt].uVal = val;\n'.format(indent))

        s.write('}\n\n')

def fill_source():
    s = open(out_cxx,'w')
    
    s.write('#include "core.h"\n')
    s.write('#include "common/types.h"\n')
    s.write('\n')
    
    s.write('namespace Simulator {\n\n')
    s.write('namespace Core {\n\n')
    s.write('using namespace Types;\n\n')

    fill_init(s)
    fill_write(s)
    fill_read(s)

    s.write('} // namespace Core\n')
    s.write('} // namespace Simulator\n')
                    
    s.close()

fill_header()
fill_source()
