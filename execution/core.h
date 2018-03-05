#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>
#include <functional>
#include <cassert>
#include <cstring>
#include <memory>

#include "common/types.h"
#include "common/dec_types.h"
#include "common/debug.h"
#include "memory.h"
#include "decoder/decoder.h"
#include "sysreg_handler.h"
#include "exec_types.h"
#include "func.h"

namespace Simulator {

namespace Core {

using namespace Types;

namespace Synonyms {

enum Regs {
  Zero = 0,
  V0 = 2,
  V1 = 3,
  A0 = 4,
  A1 = 5,
  A2 = 6,
  A3 = 7,
  SP = 29,
  FP = 30,
  RA = 31,
};

}

template<typename MMUType>
class Core : private Sysregs::SysregHandler {
  static constexpr uword_t PCBegin = 0x80000000;

  // State variables
  bool run = true;
  uword_t PC = PCBegin;
  // For branch delay slot
  uword_t nextPC = 0;
  bool isInDelaySlot = false;

  std::array<GPReg, GPRCount> registerMap;
  CalcReg HI = {0}, LO = {0};

  // Memory management
  using MMUTy = MMUType;
  size_t memSize;
  std::unique_ptr<ubyte_t []> memory;
  std::unique_ptr<MMUTy> mmu;

public:
  // Memory initialization function.
  // Gets:
  // address (for now it is physical);
  // function that initializes given memory location.
  void initMem(MMU::PhysAddr p, const std::function<void (ubyte_t *ptr)> &initFun) {
    initFun(memory.get() + p);
  }

  // Set new value of program counter.
  void setPC(uword_t pc) { PC = pc; }

private:
  // Insn handlers section
#include "insn_handlers.inc"

  typedef void (Core::*insnHandler)(const Insn &);
  std::array<insnHandler, static_cast<size_t>(OpTypes::OpType::OpNum)> insnHandlers;

private:
  // Table 5-17 in MIPS 4Kc programming manual.
  enum class ExcCode {
    Int = 0,
    Mod = 1,
    TLBL = 2,
    TLBS = 3,
    AdEL = 4,
    AdES = 5,
    IBE = 6,
    DBE = 7,
    Sys = 8,
    Ov = 12,
    MCheck = 24
  };

  enum class Syscalls {
    Exit = 10,
  };

  // For address insn
  MMU::VirtAddr badVAddr = 0;
  uword_t ASID = 0;
  void raiseException(ExcType, ExcCode);

  // Init helper functions
#include "sysreg_init.inc"

public:
  Core(size_t memSizeArg):
    Sysregs::SysregHandler(registerMap),
    registerMap({0}), memSize(memSizeArg), mmu(new MMUTy(sysregs)) {
#ifdef TLB_DEBUG
    // magic value to check two TLB records
    memSize = 16408;
#endif

    // Memory init
    memory.reset(new ubyte_t[memSize]);

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
    mmu->write(3);

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
    mmu->write(15);
#endif
  }

  size_t getMemSize() {
    return memSize;
  }

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
  bool fetch(uword_t &w) {
    MMU::PhysAddr pAddr;
    auto excT = mmu->template translate<MMU::AccType::Read>(PC, pAddr);
    if (excT != ExcType::None) {
      raiseException(excT, ExcCode::TLBL);
      return false;
    }
    w = *(reinterpret_cast<uword_t *>(memory.get() + pAddr));
    return true;
  }

  bool isRunning() {
    return run;
  }

  uword_t getReg(size_t index) {
    assert(index < GPRCount);
    return registerMap[index].uVal;
  }
}; // class Core

} // namespace Core

} // namespace Simulator

#endif
