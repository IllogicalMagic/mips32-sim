#ifndef SIM_MIPS32_MEMORY_H__
#define SIM_MIPS32_MEMORY_H__

#include "common/types.h"

namespace Simulator {

namespace MMU {

using namespace Types;
  
constexpr size_t TLBEntries = 16;
typedef uword_t PhysAddr;
typedef uword_t VirtAddr;

enum class AccType {
  Read,
  Write
};

} // namespace MMU

} // namespace Simulator

#endif
