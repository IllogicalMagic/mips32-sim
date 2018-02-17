#include "core.h"
#include "mmu.h"

#define EXTRACT_BITS(x, end, beg)                           \
  (((x) & ((~static_cast<decltype(x)>(0)) << (end - beg))) >> beg)

namespace Simulator {

namespace Core {

constexpr uword_t PCBegin = 0x80000000;

Core::Core(size_t memSize):
  Sysregs::SysregHandler(registerMap),
  run(true), PC(PCBegin), nextPC(0), isInDelaySlot(false),
  registerMap({0}), badVAddr(0), ASID(0) {

#ifdef TLB_DEBUG
  // magic value to check two TLB records
  memSize = 16408;
#endif

  // Memory init
  tlb = new MMU::TLB(sysregs.EntryLo0, sysregs.EntryLo1, sysregs.EntryHi,
                     sysregs.PageMask, sysregs.Status);
  memory = new ubyte_t[memSize];

  // Init stack and frame pointers.
  // For now we have no way except this to do so.
  registerMap[Synonyms::SP].uVal = memSize;
  registerMap[Synonyms::FP].uVal = memSize;

  initSysregs();
  initHandlers();

#ifdef TLB_DEBUG
  sysregs.EntryHi.VPN2 = 1;
  sysregs.EntryLo0.PFN = 2;
  sysregs.EntryLo0.D = 1;
  sysregs.EntryLo0.V = 1;
  sysregs.EntryLo0.G = 1;
  sysregs.EntryLo1.PFN = 2;
  sysregs.EntryLo1.D = 1;
  sysregs.EntryLo1.V = 1;
  sysregs.EntryLo1.G = 1;
  sysregs.PageMask.Mask = 0;
  tlb->write(3);

  sysregs.EntryHi.VPN2 = 2;
  sysregs.EntryLo0.PFN = 1;
  sysregs.EntryLo0.D = 1;
  sysregs.EntryLo0.V = 1;
  sysregs.EntryLo0.G = 1;
  sysregs.EntryLo1.PFN = 1;
  sysregs.EntryLo1.D = 1;
  sysregs.EntryLo1.V = 1;
  sysregs.EntryLo1.G = 1;
  sysregs.PageMask.Mask = 0;
  tlb->write(15);

#endif
}

// Algorithm from MIPS32 4K Processor Core Family Software User's Manual
void Core::raiseException(ExcType ex, ExcCode code) {
  // General exception handling
  uword_t vectorOffset;
  if (sysregs.Status.EXL == 0) {
    if (isInDelaySlot) {
      sysregs.EPC.EPC = PC - 4;
      sysregs.Cause.BD = 1;
    }
    else {
      sysregs.EPC.EPC = PC;
      sysregs.Cause.BD = 0;
    }

    if (ex == ExcType::TLBRefill)
      vectorOffset = 0x000;
    else if (ex == ExcType::Interrupt && sysregs.Cause.IV == 1)
      vectorOffset = 0x200;
    else
      vectorOffset = 0x180;
  }
  else
    vectorOffset = 0x180;

  sysregs.Cause.CE = 0;
  sysregs.Cause.ExcCode = static_cast<uword_t>(code);
  sysregs.Status.EXL = 1;
  if (sysregs.Status.BEV == 1)
    PC = 0xBFC00200 + vectorOffset;
  else
    PC = 0x80000000 + vectorOffset;

  // Additional processing
  switch (ex) {
  case ExcType::TLBRefill:
  case ExcType::TLBInvalid:
  case ExcType::TLBMod:
    sysregs.BadVAddr.BadVAddr = badVAddr;
    sysregs.Context.BadVPN2 = EXTRACT_BITS(badVAddr, 31, 13);
    sysregs.EntryHi.VPN2 = EXTRACT_BITS(badVAddr, 31, 13);
    sysregs.EntryHi.ASID = ASID;
    break;
  case ExcType::AddressError:
    sysregs.BadVAddr.BadVAddr = badVAddr;
  case ExcType::Interrupt:
    // TODO: enable interrupt handling
  default:
    break;
  }
}

bool Core::fetch(uword_t &w) {
  MMU::PhysAddr pAddr;
  auto excT = tlb->translate<MMU::AccType::Read>(PC, pAddr);
  if (excT != ExcType::None) {
    raiseException(excT, ExcCode::TLBL);
    return false;
  }
  w = *(reinterpret_cast<uword_t *>(memory + pAddr));
  return true;
}


Core::~Core() {
  delete tlb;
  delete[] memory;
}
  
} // namespace Core

} // namespace Simulator
