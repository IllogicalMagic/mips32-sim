#include "core.h"

namespace Simulator {

namespace Core {

  Core::Core():
    PC(0), registerMap({0}) {
    initSysregs();
    initHandlers();
  }
  
} // namespace Core

} // namespace Simulator
