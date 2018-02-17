#ifndef SIM_MIPS32_LOADER_HPP__
#define SIM_MIPS32_LOADER_HPP__

#include <cstdlib>

#include "common/types.h"

namespace Loader {

constexpr size_t maxFileSize = 16408;

// Loads raw image.
// Takes image name and core.
template<typename Core>
void loadRawImage(const char* fIn, Core &core, size_t memSize) {
  using namespace Simulator;

  FILE *f = fopen(fIn, "rb");
  if (!f)
    PRINT_ERROR("File %s is not found\n", fIn);

  auto readFile = [=] (Types::ubyte_t *ptr) -> void {
    fread(ptr, maxFileSize, sizeof(Types::ubyte_t), f);
  };

  core.initMem(0, readFile);

  fclose(f);
}

}

#endif
