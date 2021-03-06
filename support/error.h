#ifndef SIM_MIPS32_ERROR_HPP__
#define SIM_MIPS32_ERROR_HPP__

#include <cstdio>

//TODO: encapsulate prints into normal class Logger (or use a library)

#define PRINT_ERROR(...) do {                   \
    fprintf(stderr,  __VA_ARGS__);              \
    exit(1);                                    \
  } while (0);

#define PRINT_WARNING(...) do {                 \
    fprintf(stderr,  __VA_ARGS__);              \
  } while (0);

#endif
