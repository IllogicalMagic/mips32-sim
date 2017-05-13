#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

tables = 'tables.txt'
out_h = 'opnum.h'

insn_list = []

def process_line(line):
    line = line.rstrip()
    matched = re.match('\w+', line)
    if matched:
        insn_list.append(matched.group())

for line in fileinput.input(tables):
    if line[0] != '#' and line[0] != '\n':
        process_line(line)
fileinput.close()

def gen_enum():
    out = open(out_h, 'w')
    out.write('#ifndef SIM_MIPS32_COMMON_GENERATED_OPNUM__\n')
    out.write('#define SIM_MIPS32_COMMON_GENERATED_OPNUM__\n\n')

    indent = '    '
    for num, insn in enumerate(insn_list):
        out.write('{0}{1} = {2},\n'.format(indent, insn, num))
    out.write('\n')

    out.write('#endif\n')
    out.close()

gen_enum()

