#include <iostream>
#include <cassert>
#include <algorithm>

#include "decoder.h"

/*NOTES:
b will be translated to beq
nop will be translated to sll
*/

using namespace Decoder;

uword_t Decoder::get_bits(bit_range range, word_type from) {
    assert(range.second > range.first);
    int len = range.second - range.first;
    word_t mask = ((1 << len) - 1);
    return (from >> range.first) & mask;
}

Instruction Decoder::decode_word(word_t word) {
	using namespace Commands;

    Instruction parsed;
    auto opcode = get_bits(op_range, word);
    if (!opcode) {//special
        opcode = get_bits(func_range, word);
        parsed.type = Commands::cmd_type::SPEC_CMD;	//TODO sllv, srav
        if (std::find(shift_cmds.begin(), shift_cmds.end(), opcode) != shift_cmds.end())
        	parsed.imm = static_cast<imm_t>(get_bits(shift_range, word));
        parsed.rd = get_bits(rd_range, word);
        parsed.rs = get_bits(rs_range, word);
        parsed.rt = get_bits(rt_range, word);
    }
    else if (opcode == 0b010000) {//COP0
    	opcode = get_bits(func_range, word);
        parsed.type = Commands::COP_CMD;
    }
    else if (opcode == j || opcode == jal) {
    	parsed.imm = static_cast<imm_t>(get_bits(address_range, word) << 2);
    	parsed.type = Commands::CMD;
	}
	else {
    	parsed.type = Commands::CMD;
    	auto ops_arr_end = signed_ops.end();
    	if (std::find (signed_ops.begin(), ops_arr_end, opcode) != ops_arr_end) {
    	//operation is signed
    		hword_t imm = 0xffff & word;
    		parsed.imm = imm;
		}
		else if (opcode == beq || opcode == bne) {
			uword_t offset = (0xffff & word) << 2;
			parsed.imm = static_cast<imm_t>(offset);	//warning here
		}
		else {//unsigned op
			parsed.imm = 0xffff & word;
		}

        parsed.rs = get_bits(rs_range, word);
        parsed.rt = get_bits(rt_range, word);
    }
    parsed.op = opcode;//TODO encode different way
    return parsed;
}
