#include "core.h"
#include "mmu.h"

#define EXTRACT_BITS(x, end, beg)                           \
  (((x) & ((~static_cast<decltype(x)>(0)) << (end - beg))) >> beg)

namespace Simulator {

namespace Core {

// Algorithm from MIPS32 4K Processor Core Family Software User's Manual
template<>
void Core<MMU::TLB>::raiseException(ExcType ex, ExcCode code) {
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

} // namespace Core

} // namespace Simulator
