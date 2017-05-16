#ifndef SIM_MIPS32_MMU_H__
#define SIM_MIPS32_MMU_H__

#include "common/types.h"
#include "core.h"
#include "memory.h"

namespace Simulator {

namespace MMU {

using namespace Types;

using Core::Core;

class TLB {
  // TLB cache with 4kb page size
  class SWTLB {
    static constexpr uword_t pageMask = 0xFFF;

    uint64_t valid;
    struct {
      VirtAddr vaddr;
      PhysAddr paddr;
    } translations[64];

    size_t index(VirtAddr vaddr) const {
      return (vaddr >> 12) && 0x3F;
    }
  public:
    SWTLB():valid(0) {}
    void invalidate() {valid = 0;}
    void insert(VirtAddr vaddr, PhysAddr paddr) {
      size_t i = index(vaddr);
      translations[i] = {vaddr & ~pageMask, paddr & ~pageMask};
      valid |= ((uint64_t) 1 << i);
    }
    bool translate(VirtAddr vaddr, PhysAddr &paddr) {
      size_t i = index(vaddr);
      paddr = translations[i].paddr | (vaddr & pageMask);
      return (valid & ((uint64_t) 1 << i))
        && ((vaddr & (~pageMask)) == translations[i].vaddr);
    }
  } swtlb;

  // Connect MMU to core
  Core::SEntryLo0 &EntryLo0;
  Core::SEntryLo1 &EntryLo1;
  Core::SEntryHi &EntryHi;
  Core::SPageMask &PageMask;
  const Core::SStatus &Status;

  struct {
    struct {
      uword_t pageMask;
      uword_t VPN2;
    } tag;
    struct {
      uword_t PFN0;
      uword_t PFN1;
    } data;
  } entries[TLBEntries];

public:
  Core::ExcType translate(VirtAddr vaddr, PhysAddr &paddr) {
    // TODO: implement translation
    paddr = vaddr;
    return Core::ExcType::None;
  }

  Core::ExcType write(size_t index);
  Core::ExcType read(size_t index);

  TLB(Core::SEntryLo0 &ELo0, Core::SEntryLo1 &ELo1, Core::SEntryHi &EHi,
      Core::SPageMask &PM, Core::SStatus &S):
    EntryLo0(ELo0), EntryLo1(ELo1), EntryHi(EHi), PageMask(PM), Status(S) {}

};

} // namespace MMU

} // namespace Simulator

#endif
