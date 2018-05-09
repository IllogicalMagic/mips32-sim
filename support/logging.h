#ifndef SIM_MIPS32_LOGGING_H__
#define SIM_MIPS32_LOGGING_H__

#include <iostream>
#include "common/types.h"
#include "common/debug.h"
#include "execution/exec_types.h"
#include <assert.h>
//TODO make logger appropriate to work with Decoder and other possible classes of interest
//TODO log exceptions
namespace Simulator {

namespace Core {
template <typename MMUType>
class Core;
}

namespace Logger {

using namespace Types;

//TODO special type for hex values to guarantee argument of valid type
struct HexValue {
    uword_t val;
    HexValue(uword_t init): val(init) {}
};

std::ostream &operator <<(std::ostream& out, const HexValue& val);

enum LogLevel: int {
   DEBUG = 0b11, FLOW = 0b1, WDATA = 0b10
};//DEBUG includes all

//TODO encapsulate necessary public non-template interface from Core
template <typename MMUType>
class SimLogger {
    using SimType = Core::Core<MMUType>;

    SimType & _sim;
    LogLevel _level; //? make constexpr
    std::ostream & out;

    void inline logRegVal(uword_t val) {
        //register contain word-sized value
        //TODO option sign-hint (overhead)
        if (_level & 0b10) {
            out << val;

            uword_t max = ((uword_t)0 - 1);
            uword_t bd = max / 2;
            if (val > bd) {
                dword_t hint = (dword_t) val - max;
                out << " ? " << hint;
            }
        }
    }

public:
    SimLogger(SimType & sim, LogLevel level):
        _sim(sim), _level(level), out(std::cout) {}
    //out is flushed in destructor by default

    //void fetchedInsn(); - Listener
    //void decodedInsn(); - Listener
    //TODO change arg to StringView
    void executingInsn(const char * mnemonic) { //Listener
        if (_level & 0b1) {
            out << "\n" << HexValue(_sim.getPC()) << ": " << mnemonic << "\n";
        }
    }
    //TODO make signed and unsigned registers
    void writeReg(const size_t regNum) { //Listener
        out << "$" << regNum << " = ";

        auto val = _sim.getReg(regNum).uVal;
        logRegVal(val);
        out << "\n";
    }

    void writeReg(const RegType type) {
        assert(type != RegType::GPR);
        if (type == RegType::HI)
            out << "$HI = ";
        else if (type == RegType::LO)
            out << "$LO = ";

        auto val = _sim.getReg(type).uVal;
        logRegVal(val);
        out << "\n";
    }

//TODO choose if print memVAddr or memPAddr depending on appmode or simulator
    void writeMem(const uword_t memVAddr, const uword_t value) {
        if (_level & 0b10) {
            out << "[" << HexValue(memVAddr) << "] = " << value << "\n";
        }
    }
}; //class SimLogger

} //namespace Logger

} //namespace Simulator

#endif //SIM_MIPS32_LOGGING_H__
