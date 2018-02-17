#include "tlb.h"

namespace Simulator {

namespace MMU {

template<>
bool SWTLB::translate<AccType::Read>(uint8_t ASID, VirtAddr vaddr, PhysAddr &paddr) {
  size_t i = index(vaddr);
  return translateInternal(i, ASID, vaddr, paddr);
}

template<>
bool SWTLB::translate<AccType::Write>(uint8_t ASID, VirtAddr vaddr, PhysAddr &paddr) {
  size_t i = index(vaddr);
  if (!translateInternal(i, ASID, vaddr, paddr))
    return false;
  if (translations[i].D)
    return true;
  lastExc = ExcType::TLBMod;
  return false;
}

template<>
bool TLB::translateAdditional<AccType::Write>(bool Dirty) {return Dirty;}

} // namespace MMU

} // namespace Simulator
