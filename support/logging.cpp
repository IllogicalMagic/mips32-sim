#include <iostream>
#include <string>
#include <algorithm>
//#include <boost/program_options.hpp>

#include "error.h"
#include "logging.h"

namespace Simulator {

namespace Logger {

std::ostream &operator <<(std::ostream& out, const HexValue& val) {
   out << std::hex << "0x" << val.val << std::dec;
   return out;
}

//TODO generate this
std::istream &operator >>(std::istream& in, LogLevel& lvl) {
    std::string token;
    in >> token;

    std::transform(token.begin(), token.end(), token.begin(), ::toupper);

    if (token == "DEBUG")
        lvl = DEBUG;
    else if (token == "FLOW")
        lvl = FLOW;
    else if (token == "WDATA")
        lvl = WDATA;
    else {
        PRINT_ERROR("Wrong value for enum LogLevel");
        exit(0);
    }
    return in;
}

} //Logger

} //Simulator
