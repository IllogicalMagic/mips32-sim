#!/usr/bin/python2.7

import sys
import fileinput
import re
import io

insn_table = '../common/tables.txt'
handlers_cxx = 'handlers.cpp'

out_c = 'insn_handlers.inc'

insns = {}
debug_line = '  PRINT_DEBUG("{0}: \\t");\n'
handler_stub = ' {{\n  PRINT_DEBUG("Executed {0}\\n");\n  assert(0 && "Unimplemented insn");\n}}\n'
handler_decl = 'void processInsn{0}(const Types::Insn &i)'

logger_cmds = {'insn': '  _logger.executingInsn("{}");\n', 'wreg': '  _logger.writeReg({});\n',
               'wmem': '  _logger.writeMem({}, {});\n'} #rt and vAddr

# translation table
repl_table = [ ('GPR', 'registerMap'),
               ('rs' , 'i.rs'),
               ('rt' , 'i.rt'),
               ('rd' , 'i.rd'),
               ('imm', 'i.imm'),
               ('S\.' , 'sysregs.'),
               ('\.u' , '.uVal'),
               ('\.s' , '.sVal'),
               ('w_t', 'word_t'),
               ('b_t', 'byte_t'),
               ('r_shift', 'arithmetic_rshift'),
               ('AccType::', 'MMU::AccType::'),
               ('memory', 'memory.get()')]

defuse_table = [ 'GPR\[r.\]',
                 'HI',
                 'LO',
                 'imm',
                 '(?<=\().*memory.*(?=\))']
               #memory+pAddr  

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
        line = re.sub(old + '(?!!)', new, line)
    for old, new in repl_table:
        line = re.sub(old + '!', old, line)
    return line

# expand all special variables into corresponding C++ code
def process_def(insn):
    global insns
    new_hb = []
    for line in insns[insn]:
        new_hb.append(replace_tokens(line))
    insns[insn] = new_hb

# read handler from first { to last }
def read_handler(h, insn):
    line = extract_line(h)

    while line == '\n':
        extract_line(h)

    handler_body = []

    if line != '{\n':
        print 'Expected }'
        raise BaseException
    handler_body.append(line)
    handler_body.append(logger_cmds['insn'].format(insn))
    #handler_body.append(debug_line.format(insn))

    line = extract_line(h)
    while line != '}\n':
        handler_body.append(line)
        line = extract_line(h)

    handler_body.append(line)

    insns[insn] = handler_body

# filter non-conditional statements from handlers
def filter_stmts(handler):
    stmts_raw = handler.translate(None, '\n')
    # remove complex if statements
    stmts_raw = re.sub('.* {.*}', '', handler)
    stmts = stmts_raw.split(';\n')
    # get only assignments
    return filter(lambda x : ' = ' in x, stmts)


# generate debug string for tracing defs and uses
#def gen_full_info(defs, uses, before):
#    args = []
#    fmts = []
#    val_fmt = '(0x%08x,%u)'
#    for d in defs:
#        if before and 'memory' in d:
#            continue
#        fmt, arg = extract_index(d)
#        fmts.append(fmt + val_fmt)
#        if arg:
 #           args.append(arg)
  #      arg = convert_ref_to_value(d)
   #     args.extend((arg, arg))
    #if before:
     #   for u in uses:
      #      if 'memory' in u:
       #         continue
        #    fmt, arg = extract_index(u)
         #   fmts.append(fmt + val_fmt)
          #  if arg:
           #     args.append(arg)
            #arg = convert_ref_to_value(u)
            #args.extend((arg, arg))
#
 #   prefix = ''
  #  if not before:
   #     prefix = 'WB: '
    #return get_debug_string(prefix, fmts, args)

# append .u for values that should be somehow accessed
def get_ref_unsigned(ref):
    if 'GPR' in ref or 'HI' in ref or 'LO' in ref:
        return ref + '.u'
    return ref

def get_mem_value(defin):
    #memory + pAddr
    return '*reinterpret_cast<uw_t *>({0})'.format(defin)

def gen_def_log(defs, insn):
	res = []
	for defin in defs:
		if not 'memory' in defin:
			assert not 'imm' in defin, "IMM cannot be defined in insn"
			if 'GPR' in defin:
				arg = defin[4:6] #rs,rt or rd
			else: #HI or LO
				arg = 'RegType::' + defin[:2]
			res.append(logger_cmds['wreg'].format(arg))
		else:
		    vAddrArg, valueArg = 'vAddr', get_mem_value(defin)
		    res.append(logger_cmds['wmem'].format(vAddrArg, valueArg))		    
	return res
	
def gen_use_log(uses, insn):
	return []	

def gen_printer(insn):
    handler = ''.join(insns[insn][2:-1])
    stmts = filter_stmts(handler)
    defs = set()
    uses = set()
    for stmt in stmts:
        x = stmt.split(' = ')
        lhs, rhs = stmt.split(' = ')
        for var in defuse_table:
            matched_lhs = re.findall(var, lhs)
            defs = defs.union(matched_lhs)
            matched_rhs = re.findall(var, rhs)
            uses = uses.union(matched_rhs)

    defs = map(get_ref_unsigned, defs) #GPR
    uses = map(get_ref_unsigned, uses)

    #TODO write logging above def-use sets
    def_log = gen_def_log(defs, insn)
    use_log = gen_use_log(uses, insn)
    
    res = insns[insn]
    # insert after "Executed ..."
    if use_log:
        res = res[:2] + use_log + res[2:]
    # insert before last }
    if def_log:
        if 'DelaySlot' in res[-2]: #substring match
            res = res[:-2] + def_log + res[-2:]
        else:
            res = res[:-1] + def_log + res[-1:]
    insns[insn] = res

def gen_exception_tracer(insn):
    handler = insns[insn]
    for i, line in enumerate(handler):
        if 'raiseException' in line:
            args = re.search('\(.*\)', line).group()
            args = args.strip('()')
            exc_ty, exc_code = args.split(',')
            ident = re.match('\s*', line).group()
            res = '{2}PRINT_DEBUG("Exception {0} occured, code = %d.\\n", static_cast<int>({1}));\n'
            res = res.format(exc_ty, exc_code, ident)
            handler[i] = res + line

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
                read_handler(h, insn)
                gen_exception_tracer(insn)
                gen_printer(insn)
                process_def(insn)

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
            if type(line) != str:
                print ("Line must be a string, but:", line)
                exit(1)
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

