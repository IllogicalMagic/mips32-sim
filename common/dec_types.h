#ifndef SIM_MIPS32_COMMON_DEC_TYPES_HEADER__
#define SIM_MIPS32_COMMON_DEC_TYPES_HEADER__

#include "types.h"
#include "op_traits.h"

namespace Simulator {

namespace Types {

  typedef size_t regn_t;
  typedef word_t imm_t;

  namespace OpTypes {
      enum OpType {
          //TODO To be filled
      };
  }

  struct Instruction {
    OpTypes::OpType op;
    regn_t rs;
    regn_t rt;
    regn_t rd;
    imm_t imm;
  };

} // namespace Types

} // namespace Simulator

#endif //SIM_MIPS32_COMMON_DEC_TYPES_HEADER__
