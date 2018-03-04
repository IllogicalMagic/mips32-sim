#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

sysreg_descr = 'sysregs.txt'
out_h = 'sysregs.h'
out_decl_h = 'sysreg_decl.h'
out_arr_h = 'sysreg_arr.h'
out_cxx = 'sysregs.cpp'
out_init = 'sysreg_init.inc'

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

sr = 'Sysregs::SysregHandler::'

def fill_header():
    global realregnum
    global regnum

    # generate sysreg definitions
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

    # generate sysreg function declarations
    h = open(out_decl_h, 'w')
    h.write('#ifndef SIM_MIPS32_GENERATED_SYSREG_DECL_HEADER__\n')
    h.write('#define SIM_MIPS32_GENERATED_SYSREG_DECL_HEADER__\n\n')

    for _, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid {2}sysregInit<{2}SR::RegIndex::{0}, {1}>();\n'.format(regname, regsel, sr))
    for _, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid {2}sysregWrite<{2}SR::RegIndex::{0}, {1}>(const Insn &);\n'.format(regname, regsel, sr))
    for _, regsel, regname, _ in sysregs:
        h.write('template<>\nvoid {2}sysregRead<{2}SR::RegIndex::{0}, {1}>(const Insn &);\n'.format(regname, regsel, sr))


    h.write('\n#endif\n')
    h.close()

def fill_init(s):
    global regnum
    indent = '  '

    # generate init function for every sysreg
    for regno, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid {0}sysregInit<{0}SR::RegIndex::{1}, {2}>() {{\n'.format(sr, regname, regsel))
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
                flen = end - begin + 1
                mask = ~(~0 << (flen))
                if val == 'U':
                    val = str(-1 & mask)
                s.write('{0}sysregs.{1}.{2} = {3};\n'.format(indent, regname, fname, val))

        s.write('}\n\n')

# generate sysreg write handlers
def fill_write(s):
    for regnum, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid {2}sysregWrite<{2}SR::RegIndex::{0}, {1}>(const Insn &i) {{\n'.format(regname, regsel, sr))

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

# generate sysreg read handlers
def fill_read(s):
    for regnum, regsel, regname, regfields in sysregs:
        s.write('template<>\nvoid {2}sysregRead<{2}SR::RegIndex::{0}, {1}>(const Insn &i) {{\n'.format(regname, regsel, sr))

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

# generate special structure of arrays for sysreg handling
def fill_arrays(s):
    h = open(out_arr_h, 'w')
    h.write('#ifndef SIM_MIPS32_GENERATED_SYSREG_ARR_HEADER__\n')
    h.write('#define SIM_MIPS32_GENERATED_SYSREG_ARR_HEADER__\n\n')

    cur_reg = 0
    gen_arr = []
    for i in range(0, regnum + 1):
        gen_arr.append([])
        regno, regsel, regname, _ = sysregs[cur_reg]
        if regno == i:
            gen_arr[i].append((regno,regsel,regname))
            cur_reg += 1
            if cur_reg >= realregnum:
                break

            # append regs with same num but different sel
            regno_s, regsel_s, regname_s, _ = sysregs[cur_reg]
            while regno_s == regno:
                gen_arr[i].append((regno,regsel,regname))
                cur_reg += 1
                regno_s, regsel_s, regname_s, _ = sysregs[cur_reg]

    indent = '    '
    for elem in gen_arr:
        if len(elem) > 0:
            # create array of regsel+1 pointers to reg with regnum
            h.write('{0}sysregOp regWrite{1}[{2}];\n'.format(indent, elem[0][0], len(elem)))

    for elem in gen_arr:
        if len(elem) > 0:
            # create array of regsel+1 pointers to reg with regnum
            h.write('{0}sysregOp regRead{1}[{2}];\n'.format(indent, elem[0][0], len(elem)))

    h.write('\n#endif\n')
    h.close()

    # generate proxy functions for sysreg handling
    indent = '  '
    for elem in gen_arr:
        if len(elem) > 0:
            regno, regsel, regname = elem[0]
            s.write('template<>\nvoid {0}sysregWriteProxy<{0}SR::RegIndex::{1}>(const Insn &i) {{\n'.format(sr, regname))
            s.write('{0}assert(i.imm < {1} && "Bad sel field");\n'.format(indent, len(elem)))
            s.write('{0}(this->*sysregHandlers.regWrite{1}[i.imm])(i);\n'.format(indent,regno))
            s.write('}\n\n')

    for elem in gen_arr:
        if len(elem) > 0:
            regno, regsel, regname = elem[0]
            s.write('template<>\nvoid {0}sysregReadProxy<{0}SR::RegIndex::{1}>(const Insn &i) {{\n'.format(sr, regname))
            s.write('{0}assert(i.imm < {1} && "Bad sel field");\n'.format(indent, len(elem)))
            s.write('{0}(this->*sysregHandlers.regRead{1}[i.imm])(i);\n'.format(indent,regno))
            s.write('}\n\n')

    return

def define_init(s):
    # generate main init function
    indent = '  '
    s.write('void initSysregs() {\n')
    # init every sysreg
    for _, regsel, regname, _ in sysregs:
        s.write('{0}sysregInit<SR::RegIndex::{1}, {2}>();\n'.format(indent,regname,regsel))
    s.write('\n');

    # init proxy functions for sysreg processing
    for i in range(0,regnum):
        s.write('{0}sysregWriteHandlers[{1}] = &{2}sysregWriteProxy<static_cast<SR::RegIndex>({1})>;\n'.format(indent,i,sr))
    s.write('\n')
    for i in range(0,regnum):
        s.write('{0}sysregReadHandlers[{1}] = &{2}sysregReadProxy<static_cast<SR::RegIndex>({1})>;\n'.format(indent,i,sr))
    s.write('\n')

    # init sysreg handler pointers
    for regno, regsel, regname, _ in sysregs:
        s.write('{0}sysregHandlers.regWrite{1}[{2}] = &{4}sysregWrite<SR::RegIndex::{3}, {2}>;\n'.format(indent, regno, regsel, regname, sr))
    s.write('\n')

    for regno, regsel, regname, _ in sysregs:
        s.write('{0}sysregHandlers.regRead{1}[{2}] = &{4}sysregRead<SR::RegIndex::{3}, {2}>;\n'.format(indent, regno, regsel, regname, sr))

    s.write('}\n\n')
    return

def fill_source():
    s = open(out_cxx,'w')

    s.write('#include <cassert>\n')
    s.write('\n')
    s.write('#include "sysreg_handler.h"\n')
    s.write('#include "core.h"\n')
    s.write('#include "common/types.h"\n')
    s.write('\n')
    
    s.write('namespace Simulator {\n\n')
    s.write('namespace Sysregs {\n\n')
    s.write('using MMU::TLBEntries;')
    s.write('using namespace Types;\n\n')

    fill_write(s)
    fill_read(s)
    fill_arrays(s)
    fill_init(s)

    s.write('} // namespace Sysregs\n')

    s.write('} // namespace Simulator\n')
                    
    s.close()

def fill_coreinit():
    s = open(out_init,'w')
    define_init(s)
    s.close()
    return
fill_header()
fill_source()
fill_coreinit()
