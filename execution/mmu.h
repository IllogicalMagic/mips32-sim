#ifndef SIM_MIPS32_MMU_H__
#define SIM_MIPS32_MMU_H__

#include "common/types.h"
#include "common/debug.h"
#include "core.h"
#include "memory.h"

namespace Simulator {

namespace MMU {

using namespace Types;

using Core::Core;

static constexpr uword_t pageMask = 0xFFF;
  // TLB cache with 4kb page size
class SWTLB {
  uint64_t valid;
  Core::ExcType lastExc;

  struct {
    VirtAddr vaddr;
    PhysAddr paddr;
    uint8_t ASID;
    // Global
    uint8_t G;
    // Dirty
    uint8_t D;
  } translations[64];

  size_t index(VirtAddr vaddr) const {
    return (vaddr >> 12) & 0x3F;
  }

  bool translateInternal(size_t i, uint8_t ASID, VirtAddr vaddr, PhysAddr &paddr) {
    uint64_t mask = (uint64_t) 1 << i;
    paddr = translations[i].paddr | (vaddr & pageMask);

    // Check if valid and matches given address
    bool result = (valid & mask) && ((vaddr & (~pageMask)) == translations[i].vaddr)
      && ((translations[i].G) || (ASID == translations[i].ASID));
    if (!result) {
      lastExc = Core::ExcType::None;
      return false;
    }

    PRINT_DEBUG("Got address from cache\n");
    // Success
    return true;
  }
public:
  SWTLB():valid(0) {}
  void invalidate() {valid = 0;}

  void insert(uint8_t G, uint8_t ASID, uint8_t D, VirtAddr vaddr, PhysAddr paddr) {
    size_t i = index(vaddr);
    translations[i] = {vaddr & ~pageMask, paddr & ~pageMask, ASID, G, D};
    PRINT_DEBUG("Cached V %x, P %x\n", vaddr & ~pageMask, paddr & ~pageMask);
    valid |= ((uint64_t) 1 << i);
  }

  template<AccType AT>
  bool translate(uint8_t ASID, VirtAddr vaddr, PhysAddr &paddr);
  Core::ExcType getLastExc() {return lastExc;}
};

class TLB {
public:
  SWTLB swtlb;

  // Connect MMU to core
  Core::SEntryLo0 &EntryLo0;
  Core::SEntryLo1 &EntryLo1;
  Core::SEntryHi &EntryHi;
  Core::SPageMask &PageMask;
  const Core::SStatus &Status;

  struct TLBEntry {
    struct {
      uword_t pageMask;
      uword_t VPN2;
      bool G;
      uint8_t ASID;
    } tag;
    struct {
      uword_t PFN;
      bool D, V;
    } data[2];
  };

  std::array<TLBEntry, TLBEntries> entries;
  // Hidden bits for entries.
  uint64_t valid;

  // To insert in general translate
  template<AccType AT>
  bool translateAdditional(bool Dirty) {return true;}

  template<AccType AT>
  Core::ExcType translateInternal(VirtAddr vaddr, PhysAddr &paddr) {
    // Check address bounds
    bool UserMode = Status.UM & ~Status.EXL & ~Status.ERL;
    if (vaddr & 0x80000000) {
      if (UserMode)
        return Core::ExcType::AddressError;

      // kseg0/1
      if (vaddr < 0xC0000000) {
        paddr = vaddr - 0x80000000;
        return Core::ExcType::None;
      }
    }

    // Try to find in cache.
    // Success.
    if (swtlb.translate<AT>(EntryHi.ASID, vaddr, paddr))
      return Core::ExcType::None;

    // Success with exception (TLBMod).
    auto swtlbStatus = swtlb.getLastExc();
    if (swtlbStatus != Core::ExcType::None)
      return swtlbStatus;

    // Go through all entries.
    auto VPN = (vaddr >> 13) << 13;
    uint64_t validIter = 1;
    for (const auto &e : entries) {
      // Try only if entry was initialized.
      if ((validIter & valid))
        if (((VPN & ~e.tag.pageMask) == e.tag.VPN2)
            && (e.tag.G || (e.tag.ASID == EntryHi.ASID))) {
          // Found match.
          // Now only 4k pages are handled.
          const auto &data = e.data[(vaddr & (1 << 12)) != 0];
          // Handle valid bit.
          if (!data.V)
            return Core::ExcType::TLBInvalid;
          // Handle dirty bit for writes.
          if (!translateAdditional<AT>(data.D))
            return Core::ExcType::TLBMod;

          // Get address.
          constexpr size_t offsetlen = 12;
          paddr = (vaddr & ~(~0 << offsetlen)) | data.PFN;

          // Fill cache with new record.
          swtlb.insert(e.tag.G, e.tag.ASID, data.D, vaddr, paddr);
          return Core::ExcType::None;
        }
      validIter <<= 1;
    }

    // Entry not found.
    return Core::ExcType::TLBRefill;
  }
public:
  template<AccType AT>
  Core::ExcType translate(VirtAddr vaddr, PhysAddr &paddr) {
    auto ret = translateInternal<AT>(vaddr, paddr);
    PRINT_DEBUG("Translated: VA %x -> PA %x %s\n", vaddr, paddr,
                ret == Core::ExcType::None ? "" : "exception");
    return ret;
  }
  bool write(size_t index) {
    assert(index < TLBEntries && "Index should be less than TLBEntries");

    uint64_t validIter = 1;
    // Check on duplicate match.
    for (size_t i = 0; i < TLBEntries; ++i, validIter <<= 1) {
      // Skip uninitialized entries.
      if ((validIter & valid) == 0)
        continue;

      if (i == index)
        continue;
      if (entries[i].tag.VPN2 == (EntryHi.VPN2 << 13))
        return false;
    }

    auto &e = entries[index];
    // Set tag.
    // 4k pages only.
    e.tag.pageMask = 0;
    e.tag.VPN2 = (EntryHi.VPN2 << 13);
    e.tag.ASID = EntryHi.ASID;
    e.tag.G = EntryLo0.G & EntryLo1.G;

    // Set data.
    e.data[0].PFN = (EntryLo0.PFN << 12);
    e.data[0].V = EntryLo0.V;
    e.data[0].D = EntryLo0.D;
    e.data[1].PFN = (EntryLo1.PFN << 12);
    e.data[1].V = EntryLo1.V;
    e.data[1].D = EntryLo1.D;

    valid |= ((uint64_t) 1 << index);
    return true;
  }

  void read(size_t index) {
    assert(index < TLBEntries && "Index should be less than TLBEntries");

    auto &e = entries[index];
    PageMask.Mask = 0;
    // Fill EntryHi.
    EntryHi.VPN2 = e.tag.VPN2 >> 13;
    EntryHi.ASID = e.tag.ASID;

    // Fill EntryLoN.
    EntryLo0.PFN = e.data[0].PFN >> 12;
    EntryLo0.V = e.data[0].V;
    EntryLo0.G = e.tag.G;
    EntryLo1.PFN = e.data[1].PFN >> 12;
    EntryLo1.V = e.data[1].V;
    EntryLo1.G = e.tag.G;
  }

  TLB(Core::SEntryLo0 &ELo0, Core::SEntryLo1 &ELo1, Core::SEntryHi &EHi,
      Core::SPageMask &PM, Core::SStatus &S):
    EntryLo0(ELo0), EntryLo1(ELo1), EntryHi(EHi), PageMask(PM), Status(S), valid(0) {}

};

} // namespace MMU

} // namespace Simulator

#endif
