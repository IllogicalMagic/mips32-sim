#ifndef SIM_MIPS32_DECODER_HEADER__
#define SIM_MIPS32_DECODER_HEADER__

#include <utility>
#include <array>
#include <map>
#include "../common/dec_types.h"

namespace Simulator {

namespace Decoder {
  using namespace Types;

  namespace Commands {
	  #include "dec_cmds.h"
	  //enum command_name
	  //enum spec_command_name
	  //enum cop0_command_name

	  enum cmd_type{
      CMD = 0, SPEC_CMD, COP_CMD, 
      CMD_TYPES_NUM
	  };
  }

  constexpr int WORD_LEN = 32;

  using std::pair;
  using bit_range = pair<int, int>;    //range [a, b)
  //!!!used in get_bits

  constexpr bit_range op_range = {26, WORD_LEN};
  constexpr bit_range address_range = {0, 26};
  constexpr bit_range rs_range = {21, 26}, rt_range = {16, 21}, rd_range = {11, 16};
  constexpr bit_range shift_range = {6, 11};
  constexpr bit_range func_range = {0, 6};

  constexpr std::array<Commands::spec_command_name, 3> shift_cmds = {Commands::Sll, Commands::Sra, Commands::Srl};
  constexpr std::array<Commands::command_name, 7> signed_ops = {
    Commands::Addi, Commands::Andi, Commands::Ori, Commands::Xori,
    Commands::Lw, Commands::Lh, Commands::Lb };

  Insn decode_word(word_t word);
  uword_t get_bits(bit_range range, word_t from);

  #include "map_match.h"	//constexpr std::map<DecEnType, Types::OpTypes::OpType> cmd_matcher, spec_cmd_matcher, cop0_cmd_matcher;
  template <typename DecEnType>
  Types::OpTypes::OpType match_op(DecEnType entry);
}//namespace Decoder

}//namespace Simulator

#endif  //SIM_MIPS32_DECODER_HEADER__
