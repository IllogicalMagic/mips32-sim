#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>
#include <cassert>

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

  template<SR::RegIndex I>
  void sysregWriteProxy(const Insn &) {assert(0 && "Unimplemented sysreg");}
  template<SR::RegIndex I>
  void sysregReadProxy(const Insn &) {assert(0 && "Unimplemented sysreg");}

  typedef void (Core::*sysregOp)(const Insn &);

  struct {
#include "sysreg_arr.h"
  } sysregHandlers;

  std::array<sysregOp, static_cast<size_t>(SR::RegIndex::SysregNum)> sysregWriteHandlers;
  std::array<sysregOp, static_cast<size_t>(SR::RegIndex::SysregNum)> sysregReadHandlers;

  void initSysregs();
public:
  Core();
  int testSysregs() {
    Insn I = {};
    (this->*sysregWriteHandlers[I.rd])(I);
    return I.rt;
  }
}; // class Core

#include "sysreg_decl.h"

} // namespace Core

} // namespace Simulator

#endif
