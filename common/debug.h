// Some useful definitions for debugging

#ifndef SIM_MIPS32_DEBUG_H__
#define SIM_MIPS32_DEBUG_H__

#include <cstdio>

namespace Simulator {

#ifndef NDEBUG
#define PRINT_DEBUG(...)                        \
  do {                                          \
    fprintf(stderr, __VA_ARGS__);               \
  } while (0);
#else
#define PRINT_DEBUG(...)
#endif

} // namespace Simulator

#endif
