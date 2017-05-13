#ifndef SIM_MIPS32_COMMON_OPTRAITS_HEADER__
#define SIM_MIPS32_COMMON_OPTRAITS_HEADER__

namespace Simulator {

namespace OpTraits {

  enum class OpType {
    #include "opnum.h"
    OpNum
  };

} // namespace OpTypes

} // namespace Simulator

#endif
