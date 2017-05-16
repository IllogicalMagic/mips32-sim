#include <iostream>
#include <cassert>
#include <algorithm>

#include "decoder.h"

/*NOTES:
b will be translated to beq
nop will be translated to sll
*/

namespace Simulator { namespace Decoder {

unsigned get_bits(bit_range range, word_t from) {
  assert(range.second > range.first);
  int len = range.second - range.first;
  word_t mask = ((1 << len) - 1);
  return (from >> range.first) & mask;
}

//TODO add to generation
template <>
OpTypes::OpType match_op(Commands::command_name entry) {
  return command_name_matcher.find(entry)->second;	
}

template <>
OpTypes::OpType match_op(Commands::spec_command_name entry) {
  return spec_command_name_matcher.find(entry)->second;
}	
	
template <>
OpTypes::OpType match_op(Commands::spec2_command_name entry) {
  return spec2_command_name_matcher.find(entry)->second;	
}

template <>
OpTypes::OpType match_op(Commands::cop0_command_name entry) {
  return cop0_command_name_matcher.find(entry)->second;
}
    
Insn decode_word(word_t word) {
  using namespace Commands;

  Insn parsed;
  unsigned opcode = get_bits(op_range, word);
  if (opcode == SPEC_CMD) {//special
    opcode = get_bits(func_range, word);
    parsed.op = match_op(static_cast<spec_command_name>(opcode));
    //parsed.type = Commands::cmd_type::SPEC_CMD;	//TODO sllv, srav
    if (std::find(shift_cmds.begin(), shift_cmds.end(), opcode) != shift_cmds.end())
      parsed.imm = static_cast<int>(get_bits(shift_range, word));	//warning here
    parsed.rd = get_bits(rd_range, word);
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word);                
  }
  else if (opcode == SPEC2_CMD) {//special2 - only mul handling
    opcode = get_bits(func_range, word);
    parsed.rd = get_bits(rd_range, word);
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word); 
    parsed.op = match_op(static_cast<spec2_command_name>(opcode));
  
  }
  else if (opcode == COP_CMD) {//COP0
    opcode = get_bits(func_range, word);
    parsed.op = match_op(static_cast<cop0_command_name>(opcode));
      //parsed.type = Commands::COP_CMD;
  }
  else if (opcode == J || opcode == Jal) {
    parsed.imm = static_cast<int>(get_bits(address_range, word) << 2);	//warning here
    parsed.op = match_op(static_cast<command_name>(opcode));
  }
  else {
    parsed.op = match_op(static_cast<command_name>(opcode));
    std::array<command_name, 7> signed_ops = {
      Addi, Andi, Ori, Xori, Lw, Lh, Lb };
    auto ops_arr_end = signed_ops.end();
	
    if (std::find (signed_ops.begin(), ops_arr_end, opcode) != ops_arr_end) {
      //operation is signed
      int16_t imm = 0xffff & word;
      parsed.imm = imm;
	  }
	  else if (opcode == Beq || opcode == Bne) {
      unsigned offset = (0xffff & word) << 2;
      parsed.imm = static_cast<int>(offset);	//warning here
	  }
    else {//unsigned op
      uint16_t imm = 0xffff & word;
      parsed.imm = imm;
	  }
    	
    parsed.rs = get_bits(rs_range, word);
    parsed.rt = get_bits(rt_range, word);  
  }
  return parsed;
}

} } //namespace Simulator::Decoder
