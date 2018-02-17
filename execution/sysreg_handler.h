#ifndef SIM_MIPS32_SYSREG_HANDLER_HPP__
#define SIM_MIPS32_SYSREG_HANDLER_HPP__

#include <cassert>
#include <array>

#include "common/types.h"
#include "common/dec_types.h"
#include "exec_types.h"

namespace Simulator {
namespace Sysregs {

using namespace Types;

class SysregHandler {
protected:
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

  typedef void (SysregHandler::*sysregOp)(const Insn &);

  std::array<GPReg, GPRCount> &registerMap;

  struct {
#include "sysreg_arr.h"
  } sysregHandlers;

  std::array<sysregOp, static_cast<size_t>(SR::RegIndex::SysregNum)> sysregWriteHandlers;
  std::array<sysregOp, static_cast<size_t>(SR::RegIndex::SysregNum)> sysregReadHandlers;
  SysregHandler(std::array<GPReg, GPRCount> &RM):
    registerMap(RM) {}

public:
  // Some typedefs for MMU
  using SRTy = decltype(sysregs);
};

#include "sysreg_decl.h"

} // namespace Sysregs
} // namespace Simulator

#endif
