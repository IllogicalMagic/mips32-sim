#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>
#include <functional>
#include <cassert>
#include <cstring>

#include "common/types.h"
#include "common/dec_types.h"
#include "memory.h"
#include "decoder/decoder.h"
#include "sysreg_handler.h"
#include "exec_types.h"

namespace Simulator {

namespace MMU {
  class TLB;
}

namespace Core {

using namespace Types;
using MMU::TLBEntries;

namespace Synonyms {

enum Regs {
  Zero = 0,
  SP = 29,
  FP = 30,
  RA = 31,
};

}

class Core : private Sysregs::SysregHandler {
  bool run;

  // State variables
  uword_t PC;
  // For branch delay slot
  uword_t nextPC;
  bool isInDelaySlot;

  std::array<GPReg, GPRCount> registerMap;
  CalcReg HI, LO;

  // Memory management
  ubyte_t *memory;
  MMU::TLB *tlb;

public:
  // Memory initialization function.
  // Gets:
  // address (for now it is physical);
  // function that initializes given memory location.
  void initMem(MMU::PhysAddr p, const std::function<void (ubyte_t *ptr)> &initFun) {
    initFun(memory + p);
  }

// Some important typedefs for MMU
public:
  typedef decltype(sysregs.EntryLo0) SEntryLo0;
  typedef decltype(sysregs.EntryLo1) SEntryLo1;
  typedef decltype(sysregs.EntryHi) SEntryHi;
  typedef decltype(sysregs.PageMask) SPageMask;
  typedef decltype(sysregs.Status) SStatus;

private:
  // Insn handlers section
#include "insn_handlers.h"

  typedef void (Core::*insnHandler)(const Insn &);
  std::array<insnHandler, static_cast<size_t>(OpTypes::OpType::OpNum)> insnHandlers;

public:
  // Exception handling
  enum class ExcType {
    TLBRefill,
    TLBInvalid,
    TLBMod,

    AddressError,

    Interrupt,

    MachineCheck,
    BusError,
    IntegerOverflow,
    None,
  };

private:
  enum class ExcCode {
    Int = 0,
    Mod = 1,
    TLBL = 2,
    TLBS = 3,
    AdEL = 4,
    AdES = 5,
    IBE = 6,
    DBE = 7,
    Ov = 12,
    MCheck = 24
  };

  // For address insn
  MMU::VirtAddr badVAddr;
  uword_t ASID;
  void raiseException(ExcType, ExcCode);

  // Init helper functions
  void initSysregs();
  void initHandlers();
public:
  Core(size_t memSize);
  int testSysregs() {
    Insn I = {};
    (this->*sysregWriteHandlers[I.rd])(I);
    executeInsn(I);
    return I.rt;
  }

  void executeDelaySlotInsn(bool condition) {
    isInDelaySlot = true;
    uword_t w;
    fetch(w);
    Insn i = Decoder::decode_word(w);
    executeInsn(i);
    if (condition)
      PC = nextPC;
    isInDelaySlot = false;
  }

  void executeInsn(const Insn &i) {
    PC += 4;
    registerMap[Synonyms::Zero].uVal = 0;
    (this->*insnHandlers[static_cast<size_t>(i.op)])(i);
  }

  // Fetch next insn, returning true on success
  bool fetch(uword_t &w);

  bool isRunning() {
    return run;
  }

  uword_t getReg(size_t index) {
    assert(index < GPRCount);
    return registerMap[index].uVal;
  }

  ~Core();
}; // class Core

} // namespace Core

} // namespace Simulator

#endif
