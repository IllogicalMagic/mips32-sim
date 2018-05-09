#include <iostream>
#include "logging.h"

namespace Simulator {

namespace Logger {

std::ostream &operator <<(std::ostream& out, const HexValue& val) {
   out << std::hex << "0x" << val.val << std::dec;
   return out;
}

} //Logger

} //Simulator
