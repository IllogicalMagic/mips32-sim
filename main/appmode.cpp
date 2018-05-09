#include <cstdlib>

#include "decoder/decoder.h"
#include "execution/core.h"
#include "execution/mmu_types.h"
#include "execution/fixed_mapping.h"
#include "common/types.h"
#include "common/dec_types.h"
#include "support/options.h"
#include "support/error.h"
#include "support/loader.h"

using namespace Simulator;

int main(int argc, char **argv) {
  auto args = AppmodeArguments(argc,argv);
  size_t memSize = args.memSize;
  auto& in = args.filename;

  Core::Core<MMU::FixedMapping> core(memSize);
  Loader::loadELFImage(in.c_str(), core);

  Types::uword_t w;
  Types::Insn i;
  while (core.isRunning()) {
    core.fetch(w);
    i = Decoder::decode_word(w);
    core.executeInsn(i);
  }

  auto v0 = core.getReg(2).uVal;
  auto v1 = core.getReg(3).uVal;
  printf("$v0 == %u or %d\n$v1 == %u or %d\n", v0, (int) v0, v1, (int) v1);
  return 0;
}
