#include "core.h"

namespace Simulator {

namespace Core {

  Core::Core():
    registerMap({0}) {
    initSysregs();
  }
  
} // namespace Core

} // namespace Simulator
