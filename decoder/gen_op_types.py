#! /usr/bin/env python3
# -*- coding: utf-8 -*-

#creates dec_cmds.h
#creates map with {opcode, internal_opcode} into map_match.h
#uses op_match to create enums in dec_cmds
#uses opnum.h to match to the commands

class DecoderMatchersGen:
	def __init__ (self, out_f):
		self._file = open(out_f + '.hpp', 'w')
		
	def new_matcher(self, enum_name):
		self._file.write('template<>\n')
		self._file.write('OpTypes::OpType match_op(Commands::' + enum_name + ' entry) {\n')
		self._file.write('  return ' + enum_name + '_matcher.find(entry)->second;\n}\n\n')
		
	def finalize(self):
		self._file.close()

class DecoderMapGen:
	def __init__ (self, out_f):
		self._file = open(out_f + '.h', 'w')
		
	def start_new_map(self, enum_name):
		self._file.write('const std::map<Commands::' + enum_name + ', Types::OpTypes::OpType> ' + enum_name + '_matcher = {\n')
		
	def add_member(self, mem_name):
		self._file.write('  {{Commands::{0}, OpTypes::{0}}},\n'.format(mem_name))
	
	def end_map(self):
		self._file.write('};\n\n')
		
	def finalize(self):
		self._file.close()

class DecoderTypesGen:
	def __init__(self, out_enums, out_map, out_match):
		self._file = open(out_enums + '.h', 'w')
		self._file.write('''#ifndef {0}\n#define {0}\n\n'''.format('SIM_MIPS32_DECODER_' + out_enums.upper() + '__'))
		self._map_gen = DecoderMapGen(out_map)
		self._match_gen = DecoderMatchersGen(out_match)
		
	def new_enum(self, name, in_file):
		assert (not in_file.closed)
		line = ''
		while line == "" or line[0] == "#":
		    line = in_file.readline()[:-1]
		assert (line == '{')
		
		self._file.write('enum ' + name + '{\n')
		self._map_gen.start_new_map(name)
		self._match_gen.new_matcher(name)
		
		line = in_file.readline()[:-1]
		while not line == "}":
			if not (line == "" or line[0] == "#"):
				words = line.split()
				words[0] = words[0].capitalize()
				self._map_gen.add_member(words[0])
				self._file.write('  {0} = {1},\n'.format(words[0], words[2]))
			line = in_file.readline()[:-1]
		self._map_gen.end_map()
		self._file.write(line + ';\n\n')

	def finilize(self):
		self._file.write('#endif')
		self._file.close()
		self._map_gen.finalize()
		self._match_gen.finalize()

if __name__ == "__main__":
	enums_fname = 'dec_cmds'
	map_fname = 'map_match'
	match_fname = 'matchers'
	
	out_gen = DecoderTypesGen(enums_fname, map_fname, match_fname)
	
	in_dec_ops = open('op_match.txt', 'r')

	for line in in_dec_ops:
		line = line[:-1]
		if line == "" or line[0] == "#":
		    continue
		out_gen.new_enum(name = line, in_file = in_dec_ops)
	out_gen.finilize()
