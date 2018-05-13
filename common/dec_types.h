#ifndef SIM_MIPS32_COMMON_DEC_TYPES_HEADER__
#define SIM_MIPS32_COMMON_DEC_TYPES_HEADER__

#include "types.h"

namespace Simulator {

namespace Types {

  typedef size_t regn_t;
  typedef word_t imm_t;

  namespace OpTypes {
  
  enum OpType {
    #include "opnum.h"
    OpNum
  };
  
  }

  struct Insn {
    OpTypes::OpType op;
    regn_t rs;
    regn_t rt;
    regn_t rd;
    imm_t imm;

    bool IsBranch;
  };

} // namespace Types

} // namespace Simulator

#endif //SIM_MIPS32_COMMON_DEC_TYPES_HEADER__
