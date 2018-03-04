#ifndef SIM_MIPS32_FIXED_MAPPING_H__
#define SIM_MIPS32_FIXED_MAPPING_H__

#include "sysreg_handler.h"
#include "memory.h"
#include "exec_types.h"

namespace Simulator {
namespace MMU {
class FixedMapping {
public:
  using SRTy = Sysregs::SysregHandler::SRTy;
  FixedMapping(SRTy &S) {}
  template<AccType AT>
  ExcType translate(VirtAddr vaddr, PhysAddr &paddr) {
    paddr = vaddr;
    return ExcType::None;
  }
  void write(size_t) {}
};

}

}

#endif
