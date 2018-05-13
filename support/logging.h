#ifndef SIM_MIPS32_LOGGING_H__
#define SIM_MIPS32_LOGGING_H__

#include <iostream>
#include <fstream>
#include "common/types.h"
#include "common/debug.h"
#include "execution/exec_types.h"
#include "execution/fixed_mapping.h"
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

enum LogLevel: int { //operator >> is dependant!
   DEBUG = 0b11, FLOW = 0b1, WDATA = 0b10
};//DEBUG includes all

std::istream &operator >>(std::istream& in, LogLevel& lvl);

//TODO make dumb logger
template <typename MMUType>
class SimLogger {
    using SimType = Core::Core<MMUType>;

    SimType * sim_;
    LogLevel level_; //? make constexpr
    std::ostream & out_; //out is flushed in destructor by default

    //default move constructors
    void inline logRegVal(uword_t val) {
        //register contain word-sized value
        //TODO option sign-hint (overhead)
        out_ << val;

        uword_t max = ((uword_t)0 - 1);
        uword_t bd = max / 2;
        if (val > bd) {
            dword_t hint = (dword_t) val - max;
            out_ << " ? " << hint;
        }
    }

public:
    const bool is_empty;

    SimLogger():
        out_(std::cout), is_empty(true) {}

    SimLogger(std::ostream & out, LogLevel lvl):
        sim_(static_cast<SimType *>(nullptr)), level_(lvl), out_(out), is_empty(false) {}

    SimLogger(SimLogger &&) = delete;

    SimLogger(SimLogger & rhs):
        sim_(rhs.sim_), level_(rhs.level_), out_(rhs.out_), is_empty(rhs.is_empty) {}

    SimLogger & operator = (SimLogger & rhs) {
        SimLogger tmp(rhs);
        std::swap(*this, tmp);
        return *this;
    }

    operator bool() {
        return !(is_empty || sim_ == static_cast<SimType *>(nullptr));
    }

    void setSim(SimType & sim) {
        assert (!*this); //sim not set yet
        sim_ = &sim;
    }
    //void fetchedInsn(); - Listener
    //void decodedInsn(); - Listener
    //TODO change arg to StringView
    void executingInsn(const char * mnemonic) { //Listener
        if (!*this)
            return;
        if (level_ & 0b1) {
            out_ << "\n" << HexValue(sim_->getPC()) << ": " << mnemonic << std::endl;
        }
    }

    void writeReg(const size_t regNum) { //Listener
        if (!(*this && (level_ & 0b10)))
            return;
        out_ << "$" << regNum << " = ";

        auto val = sim_->getReg(regNum).uVal;
        logRegVal(val);
        if (level_ != FLOW)
            out_ << std::endl;
    }

    void writeReg(const RegType type) {
        if (!*this)
            return;
        if (!(level_ & 0b10))
            return;
        assert(type != RegType::GPR);
        if (type == RegType::HI)
            out_ << "$HI = ";
        else if (type == RegType::LO)
            out_ << "$LO = ";

        auto val = sim_->getReg(type).uVal;
        logRegVal(val);
        out_ << std::endl;
    }

//TODO choose if print memVAddr or memPAddr depending on appmode or simulator
    void writeMem(const uword_t memVAddr, const uword_t value) {
        if (!*this)
            return;
        if (level_ & 0b10) {
            out_ << "[" << HexValue(memVAddr) << "] = " << value << "\n";
        }
    }
}; //class SimLogger

} //namespace Logger

} //namespace Simulator

#endif //SIM_MIPS32_LOGGING_H__
