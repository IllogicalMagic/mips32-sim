#include <iostream>
#include <cassert>
#include <algorithm>

#include "decoder.h"
#include "common/debug.h"

/*NOTES:
b will be translated to beq
nop will be translated to sll
*/

//Matches ops to internal op types parsed from op_match.txt
//to Execution op type Types::OpTypes::OpType which declaration is generated to common/opnum.h

namespace Simulator { namespace Decoder {

inline unsigned char get_bit(int n, word_t from) {
  return (from >> n) & 1;
}

inline uword_t get_bits(bit_range range, word_t from) {
  assert(range.second > range.first);
  int len = range.second - range.first;
  word_t mask = ((1 << len) - 1);
  return (from >> range.first) & mask;
}

#include "matchers.hpp"
    
Insn decode_word(word_t word) {
  using namespace Commands;
  using namespace Types;  

  Insn parsed;
  uword_t opcode = get_bits(op_range, word);
  if (opcode == SPEC_CMD) {//special
    opcode = get_bits(func_range, word);
    if (opcode == Srl || opcode == Srlv) {//it may be rotr or rotrv
      unsigned char r;
      if (opcode == Srl)
        r = get_bit(21, word);
      else
        r = get_bit(6, word);
      assert(r <= 1);
      opcode += (r) ? (1 << 6) : 0; //srl->rotr, srlv->rotrv
    }

    parsed.op = match_op(static_cast<spec_command_name>(opcode));
    parsed.rd = get_bits(rd_range, word);
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word);                
    if (std::find(shift_icmds.begin(), shift_icmds.end(), opcode) != shift_icmds.end())
      parsed.imm = static_cast<word_t>(get_bits(shift_range, word));
  }
  else if (opcode == SPEC2_CMD) {//special2
    opcode = get_bits(func_range, word);
    parsed.rd = get_bits(rd_range, word);
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word); 
    parsed.op = match_op(static_cast<spec2_command_name>(opcode)); 
  }
  else if (opcode == SPEC3_CMD) {
    opcode = get_bits(shift_range, word);
    parsed.rd = get_bits(rd_range, word);
    parsed.rt = get_bits(rt_range, word); 
    parsed.op = match_op(static_cast<spec3_command_name>(opcode)); 
  }
  else if (opcode == COP_CMD) {//COP0
    opcode = get_bits(func_range, word);
    parsed.op = match_op(static_cast<cop0_command_name>(opcode));
      //parsed.type = Commands::COP_CMD;
  }
  else if (opcode == J || opcode == Jal) {
    parsed.imm = static_cast<word_t>(get_bits(address_range, word) << 2);
    parsed.op = match_op(static_cast<command_name>(opcode));
  }
  else {
    parsed.op = match_op(static_cast<command_name>(opcode));
    auto ops_arr_end = sign_ext_ops.end();
	
    if (std::find (sign_ext_ops.begin(), ops_arr_end, opcode) != ops_arr_end) {
      //imm is sign extended
      hword_t imm = 0xffff & word;
      parsed.imm = imm;
	}
	else if (opcode == Beq || opcode == Bne) {
      hword_t offset = (0xffff & word);
      parsed.imm = static_cast<word_t>(offset) << 2;
	}
    else {//imm is unsign extended
      uhword_t imm = 0xffff & word;
      parsed.imm = imm;
	}
    	
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word);  
  }

  // Set IsBranch attribute.
  switch (parsed.op) {
  case OpTypes::B:
  case OpTypes::Bal:
  case OpTypes::Beq:
  case OpTypes::Bgez:
  case OpTypes::Bgezal:
  case OpTypes::Bgtz:
  case OpTypes::Blez:
  case OpTypes::Bltz:
  case OpTypes::Bltzal:
  case OpTypes::Bne:
  case OpTypes::J:
  case OpTypes::Jal:
  case OpTypes::Jr:
    parsed.IsBranch = true;
    break;
  default:
    parsed.IsBranch = false;
    break;
  }
  return parsed;
}

} } //namespace Simulator::Decoder
