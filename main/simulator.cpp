#include <cstring>
#include <cstdlib>

#include "decoder/decoder.h"
#include "execution/core.h"
#include "execution/mmu_types.h"
#include "common/types.h"
#include "common/dec_types.h"

// For now it is fixed.
constexpr size_t defaultMemSize = 1024;
constexpr size_t maxFileSize = 16408;

#define PRINT_ERROR(...) do {                   \
    fprintf(stderr,  __VA_ARGS__);              \
    exit(1);                                    \
  } while (0);

using namespace Simulator;

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

// Loads raw image.
// Takes image name and core.
void loadRawImage(const char* fIn, Core::Core<MMU::TLB> &core, size_t memSize) {
  FILE *f = fopen(fIn, "rb");
  if (!f)
    PRINT_ERROR("File %s is not found\n", fIn);

  auto readFile = [=] (Types::ubyte_t *ptr) -> void {
    fread(ptr, maxFileSize, sizeof(Types::ubyte_t), f);
  };

  core.initMem(0, readFile);

  fclose(f);
}

int main(int argc, char **argv) {
  char *in = nullptr;
  size_t memSize = defaultMemSize;
  parseArgs(argc, argv, &in, memSize);

  Core::Core<MMU::TLB> core(memSize);
  loadRawImage(in, core, memSize);

  Types::uword_t w;
  Types::Insn i;
  while (core.isRunning()) {
    core.fetch(w);
    i = Decoder::decode_word(w);
    core.executeInsn(i);
  }

  auto v0 = core.getReg(2);
  auto v1 = core.getReg(3);
  printf("$v0 == %u or %d\n$v1 == %u or %d\n", v0, (int) v0, v1, (int) v1);
  return 0;
}
