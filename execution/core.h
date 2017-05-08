#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>

#include "common/types.h"
#include "common/insn.h"

namespace Simulator {

namespace Core {

using namespace Types;

constexpr size_t GPRCount = 32;
constexpr size_t TLBEntries = 16;

struct GPReg {
  union {
    uword_t uVal;
    word_t sVal;
  };
};

class Core {
  std::array<GPReg, GPRCount> registerMap;

  struct SR {
#include "sysregs.h"
  } sysregs;

  template<SR::RegIndex I, int Sel>
  void sysregInit();
    
  template<SR::RegIndex I, int Sel>
  void sysregWrite(const Insn &);
    
  template<SR::RegIndex I, int Sel>
  void sysregRead(const Insn &);

  void initSysregs();

public:
  Core();
}; // class Core

#include "sysreg_decl.h"

} // namespace Core

} // namespace Simulator

#endif
