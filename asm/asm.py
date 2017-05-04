#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

from struct import pack

class LabelException(Exception):
    def __init__(self, label):
        self.__label = label

class LabelDict(dict):
    def __init__(self):
        self.__scale = 1

    def set_scale(self, scale):
        self.__scale = scale

    def __getitem__(self, key):
        item = dict.__getitem__(self, key)
        return item * self.__scale

    def __missing__(self, key):
        raise LabelException(key)

class Label:
    pass

class Insn:
    pass

args = sys.argv

src = args[1]
if len(args) == 3:
    dst = args[2]
else:
    dst = 'a.out'

mn_dict = {}
insn_dict = {}

labels = LabelDict()
need_fix_insn = []
insn_num = 0
need_fix = False
cur_mn = None

table_desc = {'mn'  :0,
              'fmt' :1,
              'ops' :2,
              'encd':3}

mn_dict_desc = {'fmt' :0,
                'ops' :1,
                'encd':2}

def fill_dict(line):
    params = line.rstrip('\n').split('\t')
    mn = params[0]
    mn_props = tuple(params[1:])
    mn_dict[mn] = mn_props

def parse_reg(op):
    reg = re.match('\$(\d{1,2})',op)
    if reg:
        reg_num = int(reg.group(1))
        if reg_num > 31:
            print 'Wrong register number'
            return None
        else:
            return (reg_num,)
    else:
        print 'Bad register operand'
        return None

def parse_number(op, size):
    base = 10
    num = re.match('0x[0-9a-fA-F]+', op)
    if num:
        base = 16
    else:
        num = re.match('[\-]?\d+', op)
    if num:
        val = int(num.group(), base)
        max_val = 1 << size
        if val >= max_val or val < -max_val:
            print 'Immediate exceeds allowed value'
            return None
        return num
    else:
        return None

def parse_name(op):
    label = re.match('[a-zA-Z_.](\w|\.)*',op)
    if label:
        return label
    else:
        return None

def parse_primary(prim,size):
    i = 0
    cur = re.match('\s*',prim)
    if cur:
        i =+ cur.end()
    cur = None

    if prim == '':
        print 'Missing primary expression'
        return None

    if prim[i] == '(':
        cur = parse_expr(prim[i+1:],size,True)
        if cur == None:
            return None
        i += len(cur) + 2
        if len(prim) < i or prim[i - 1] != ')':
            print 'Missing parenthesis in expression'
            return None
        return i

    if prim[i] == ')':
        print 'Mismatched parenthesis'
        return None

    cur = parse_name(prim[i:])
    if cur:
        i += cur.end()
        global need_fix
        need_fix = True
        return i

    cur = parse_number(prim[i:], size)
    if cur:
        i += cur.end()
        return i

    print 'Wrong primary expression: ', prim[i:]
    return None

def parse_expr(expr,size,inside):
    i = 0
    cur = None

    i = parse_primary(expr,size)
    if i == None:
        return

    while '' != expr[i:]:
        cur = re.match('\s*([\+\-*/]|<<|>>)', expr[i:])
        if cur:
            i += cur.end()
        else:
            if inside:
                return expr[0:i]
            else:
                print 'Missing operator in expression'
                return None

        tmp = parse_primary(expr[i:],size)
        if tmp:
            i += tmp
            continue

        print 'Wrong expression'
        return None

    return expr

def parse_offset(op):
    res = parse_expr(op,16,False)
    if res == None:
        print 'Wrong offset operand'
        return None
    return res

def parse_imm(op):
    res = parse_expr(op,16,False)
    if res == None:
        print 'Wrong immediate operand'
        return None
    return (res,)

def parse_target(op):
    res = parse_expr(op,26,False)
    if res == None:
        print 'Wrong target operand'
        return None
    return (res,)

def parse_mem(op):
    mem = re.match('(.+)\((.+)\)',op)
    if mem:
        offset = parse_offset(mem.group(1))
        reg = parse_reg(mem.group(2))
        return (reg[0], offset)
    else:
        print 'Wrong memory operand'
        return None

def parse_shift(op):
    res = parse_expr(op,5,False)
    if res == None:
        print 'Wrong shift operand'
        return None
    return (res,)

op_disp = {'r':parse_reg,
           'i':parse_imm,
           'd':parse_imm,
           't':parse_target,
           'm':parse_mem,
           's':parse_shift}

def parse_operands(optypes, op_list):
    if len(optypes) != len(op_list):
        print 'Wrong number of operands'
        raise BaseException
    else:
        conv_op = []
        for (i, op) in enumerate(op_list):
            parsed = op_disp[optypes[i]](op.strip())
            if parsed:
                conv_op.append(parsed)
            else:
                raise BaseException
        return conv_op

def parse_insn(line):
    matched = re.match('(\w+)\s+(.*)',line)
    if matched == None:
        return None

    spl = re.split(',', matched.group(2))
    mn = matched.group(1)
    global cur_mn
    cur_mn = mn
    (fmt, ops, opcode) = mn_dict[mn]
    operands = parse_operands(ops, spl)
    insn = Insn()
    insn.data = (mn, operands)
    return insn

def parse_label(line):
    re_label = parse_name(line)
    if re_label:
        label = re_label.group(0)
        if re.search(':$', line):
            if label in labels:
                print 'Redefinition of label ', label
                raise LabelException(label)
            labels[label] = insn_num
            res = Label()
            return res
    return None

def parse_line(line):
    line = line.strip()
    res = parse_label(line)
    if res == None:
        res = parse_insn(line)

    if res == None:
        print 'Very wrong line'
        raise Exception

    print "Parsed: ", line
    return res

def is_num_fit_in(num, size):
    max_val = 1 << size
    if num >= max_val or num < -max_val:
        return False
    return True

def encode(ops, encd):
    res = 0
    fields = encd.split(',')
    size = 5
    mask = ~0
    scale = 1

    for field in fields:
        ind = 0

        if field[0] in 'rb':
            op = ops[int(field[1])][ind]
            res = res << 5
            res = res | op
            continue

        elif field[0] in 'id':
            res = res << 16
            mask = ~(~0 << 16)
            size = 16
        elif field[0] == 't':
            res = res << 26
            mask = ~(~0 << 26)
            size = 26
        elif field[0] == 's':
            res = res << 5
            mask = ~(~0 << 5)
        elif field[0] == 'o':
            res = res << 16
            mask = ~(~0 << 16)
            ind = 1
            scale = 4
        else:
            res = res << len(field)
            res = res | int(field,2)
            continue

        op = ops[int(field[1])][ind]
        if need_fix:
            need_fix_insn.append((insn_num, cur_mn, op, field[0]))
            val = 0
        else:
            labels.set_scale(scale)
            val = eval(op, labels)

        if not is_num_fit_in(val, size):
            print 'Immediate truncated'
        res = res | (val & mask)

    return res

def encode_insn(mn, operands):
    encd_index = mn_dict_desc['encd']
    encd = encode(operands,mn_dict[mn][encd_index])
    print "Encoded: ", (bin(encd), encd)
    return encd

for line in fileinput.input('tables.txt'):
    if line[0] != '#':
        fill_dict(line)
fileinput.close()

encd_words = []

for line in fileinput.input(src):
    if line != '\n':
        need_fix = False
        parsed = parse_line(line)
        if isinstance(parsed, Label):
            continue
        (mn, ops) = parsed.data
        encd = encode_insn(mn, ops)
        encd_words.append(encd)
        insn_num += 1
fileinput.close()

def fix_insn(insn_num, mn, op, op_type):
    word = encd_words[insn_num]
    (fmt,_,_) = mn_dict[mn]
    size = 0
    pos = 0

    if fmt == 'I':
        size = 16
    elif fmt == 'J':
        size = 26
    elif fmt == 'R':
        size = 5
        pos = 6

    # clean-up the word
    mask = ~(~0 << size) << pos
    word &= ~mask

    scale = 1
    # for loads/stores labels considered to be scaled by 4
    if op_type == 'o':
        scale = 4
    labels.set_scale(scale)

    val = eval(op,labels)
    # displacements are relative
    if op_type == 'd':
        val -= insn_num + 1

    if not is_num_fit_in(val,size):
        print 'Immediate truncated'

    val <<= pos
    val &= mask
    word |= val
    encd_words[insn_num] = word

    print 'Fixed: ', (bin(word), word)

for insn_num, mn, op, op_type in need_fix_insn:
    fix_insn(insn_num, mn, op, op_type)

out = open(dst,'wb')
for word in encd_words:
    out.write(pack('!I',word))
out.close()

