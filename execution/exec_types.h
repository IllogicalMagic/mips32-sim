#ifndef SIM_MIPS32_EXEC_TYPES_HPP__
#define SIM_MIPS32_EXEC_TYPES_HPP__

namespace Simulator {
namespace Types {
  union CalcReg{
    uword_t uVal;
    word_t sVal;
  };

  using GPReg = CalcReg;
  constexpr size_t GPRCount = 32;
}

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

  Syscall,
  None,
};

}

#endif
