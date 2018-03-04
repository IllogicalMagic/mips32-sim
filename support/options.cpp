#include <cstring>
#include <cstdlib>

#include "support/error.h"

void parseArgs(int argc, char **argv, char **fIn, size_t &memSize) {
  for (int i = 1; i < argc; ++i) {
    // Parse --raw <file>.
    if (!strcmp("--raw", argv[i])) {
      ++i;
      if (i == argc)
        PRINT_ERROR("File should be specified after --raw option\n");
      *fIn = argv[i];
    }
    else if (!strcmp("--mem-size", argv[i])) {
      ++i;
      if (i == argc)
        PRINT_ERROR("Number should follow --mem-size option\n");
      memSize = strtoull(argv[i], NULL, 0);
    }
    else {
      PRINT_ERROR("Unknown option %s\n", argv[i]);
    }
  }
}
