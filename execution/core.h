#ifndef SIM_MIPS32_CORE_HPP__
#define SIM_MIPS32_CORE_HPP__

#include <array>
#include <tuple>
#include <functional>
#include <cassert>
#include <cstring>
#include <memory>
#include <unordered_map>
#include <vector>

#include "common/types.h"
#include "common/dec_types.h"
#include "common/debug.h"
#include "support/logging.h"
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
  GP = 28,
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
  std::unique_ptr<Logger::SimLogger<MMUType>> logger_;

  // Memory management
  using MMUTy = MMUType;
  size_t memSize;
  std::unique_ptr<ubyte_t []> memory;
  std::unique_ptr<MMUTy> mmu;

  // Region execution
  using AddrMapType = std::unordered_map<MMU::VirtAddr, size_t>;
  struct BasicBlock {
    std::vector<Insn> InsnList;
    AddrMapType::iterator BBPos;
    bool Valid = false;

    auto begin() const { return InsnList.begin(); }
    auto end() const { return InsnList.end(); }
  };

  class TranslationCache {
    static constexpr unsigned TCSize = 128;
    std::array<BasicBlock, TCSize> Storage;
    size_t CurIdx = 0;

  public:
    size_t getCurIdx() const { return CurIdx; }

    // Check if BB with index Idx exists.
    bool hasBB(size_t Idx) const {
      assert(CurIdx < TCSize && "Bad Idx");
      return Storage[Idx].Valid;
    }

    // Return BB. User should call hasBB to check whether BB exists.
    const BasicBlock &getBB(size_t Idx) const {
      assert(CurIdx < TCSize && "Bad Idx");
      return Storage[Idx];
    }

    // Inserts new BB.
    // Replacement policy -- replace the oldest one.
    // Returns index of inserted BB.
    void insertBB(const BasicBlock &BB) {
      assert(CurIdx < TCSize && "Bad CurIdx");
      Storage[CurIdx] = BB;
      if (++CurIdx >= TCSize)
        CurIdx = 0;
    }
  };

  TranslationCache TC;
  AddrMapType AddrMap;
  // Marker for basic block execution.
  bool ExceptionOccured = false;

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
  void setGP(uword_t gp) { registerMap[Synonyms::GP].uVal = gp; }

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

public: //? Why not instantiate logger separately
  Core(size_t memSizeArg):
    Sysregs::SysregHandler(registerMap),
    registerMap({0}), logger_(new Logger::SimLogger<MMUType>()), memSize(memSizeArg), mmu(new MMUTy(sysregs)),
    TC(), AddrMap() {  

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

  void connectLogger(std::unique_ptr<Logger::SimLogger<MMUType>> && toConnect) {
      if (toConnect->is_empty)
        return;
      logger_ = std::move(toConnect);
      logger_->setSim(*this);
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
    if (!fetch(w))
      return;

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

private:
  std::tuple<bool, uword_t> fetchNoExc(MMU::VirtAddr vAddr) {
    MMU::PhysAddr pAddr;
    auto excT = mmu->template translate<MMU::AccType::Read>(vAddr, pAddr);
    if (excT != ExcType::None) {
      return {false, 0};
    }
    uword_t Word = *(reinterpret_cast<uword_t *>(memory.get() + pAddr));
    return {true, Word};
  }

public:
  bool isRunning() {
    return run;
  }

  uword_t getPC() {
      return PC;
  }

  CalcReg getReg(size_t index) {
    assert(index < GPRCount);
    return registerMap[index];
  }

  CalcReg getReg(RegType type, size_t index = 0) {
      if (type == RegType::HI)
        return HI;
      if (type == RegType::LO)
        return LO;
      return getReg(index);
  }

  void process() {
    auto BBPos = AddrMap.find(PC);

    // Found BB in translation cache, execute it.
    if (BBPos != AddrMap.end()) {
      PRINT_DEBUG("Found BB in AddrMap\n");
      executeBB(BBPos->second);
      return;
    }

    // Try to form new basic block.
    auto [HasBB, BBIndex] = formBB();
    if (HasBB) {
      PRINT_DEBUG("Formed new BB\n");
      executeBB(BBIndex);
      return;
    }

    // If basic block is not formed, execute single instruction.
    PRINT_DEBUG("Executing single instruction\n");
    executeSingleInsn();
  }

  void executeSingleInsn() {
    uword_t Word;
    bool Success = fetch(Word);
    // Exception occured, fall back.
    if (!Success)
      return;
    Insn I = Decoder::decode_word(Word);
    executeInsn(I);
  }

private:
  std::tuple<bool, size_t> formBB() {
    auto [Success, BB] = decodeBB();
    if (!Success)
      return {false, 0};

    size_t Idx = TC.getCurIdx();
    if (TC.hasBB(Idx)) {
      const BasicBlock &OldBB = TC.getBB(Idx);
      AddrMap.erase(OldBB.BBPos);
    }
    auto InsP = AddrMap.insert(std::make_pair(static_cast<MMU::VirtAddr>(PC), Idx));
    assert(InsP.second && "Impossible");

    BB.BBPos = InsP.first;
    TC.insertBB(BB);
    return {true, Idx};
  }

  std::tuple<bool, BasicBlock> decodeBB() {
    auto [Success, Word] = fetchNoExc(PC);
    if (!Success)
      return {false, BasicBlock()};

    Insn I = Decoder::decode_word(Word);
    if (I.IsBranch)
      return {false, BasicBlock()};

    BasicBlock BB;
    BB.Valid = true;
    BB.InsnList.push_back(I);

    for (MMU::VirtAddr vAddr = PC + 4; ; vAddr += 4) {
      auto [Success, Word] = fetchNoExc(vAddr);
      if (!Success)
        break;

      I = Decoder::decode_word(Word);
      BB.InsnList.push_back(I);
      if (I.IsBranch)
        break;
    }

    return {true, BB};
  }

  void executeBB(size_t BBIdx) {
    const BasicBlock &BB = TC.getBB(BBIdx);

    for (const auto &I : BB) {
      executeInsn(I);
      if (ExceptionOccured)
        break;
    }

    ExceptionOccured = false;
  }
}; // class Core

} // namespace Core

} // namespace Simulator

#endif
