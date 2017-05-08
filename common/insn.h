#ifndef SIM_MIPS32_COMMON_INSN_HEADER__
#define SIM_MIPS32_COMMON_INSN_HEADER__

#include "types.h"
#include "op_traits.h"

namespace Simulator {

namespace Types {

  typedef size_t regn_t;
  typedef uword_t imm_t;
  
  struct Insn {
    OpTraits::OpType op;
    regn_t rs;
    regn_t rt;
    regn_t rd;
    imm_t imm;
  };
  
} // namespace Types

} // namespace Simulator

#endif
