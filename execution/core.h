#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>
#include <cassert>

#include "common/types.h"
#include "common/insn.h"
#include "common/op_traits.h"

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
  // State variables
  uword_t PC;
  std::array<GPReg, GPRCount> registerMap;

  struct SR {
#include "sysregs.h"
  } sysregs;

  // Sysreg handlers section
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

  // Insn handlers section
  template<OpTraits::OpType Op>
  void processInsn(const Insn &) {assert(0 && "Insn is not implemented");}

  typedef void (Core::*insnHandler)(const Insn &);
  std::array<insnHandler, static_cast<size_t>(OpTraits::OpType::OpNum)> insnHandlers;

  // Init helper functions
  void initSysregs();
  void initHandlers();
public:
  Core();
  int testSysregs() {
    Insn I = {};
    (this->*sysregWriteHandlers[I.rd])(I);
    return I.rt;
  }

  void executeInsn(const Insn &i) {
    (this->*insnHandlers[static_cast<size_t>(i.op)])(i);
    PC += 4;
  }
}; // class Core

#include "sysreg_decl.h"
#include "insn_handlers.h"

} // namespace Core

} // namespace Simulator

#endif
