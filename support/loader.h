#ifndef SIM_MIPS32_LOADER_HPP__
#define SIM_MIPS32_LOADER_HPP__

#include <cassert>
#include <cstdlib>

#include <elfio/elfio.hpp>

#include "support/error.h"
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

void loadMipsELF(ELFIO::elfio &, const char *fIn);
void checkMemLimits(ELFIO::elfio &, size_t);

// Load ELF image with name fIn.
// Supported only little-endian 32-bit executables.
template<typename Core>
void loadELFImage(const char* fIn, Core &core) {
  using namespace Simulator;

  ELFIO::elfio loader;
  loadMipsELF(loader, fIn);
  checkMemLimits(loader, core.getMemSize());

  for (const ELFIO::segment *s : loader.segments) {
    if (s->get_type() == PT_LOAD) {
      auto copySection = [&s] (Types::ubyte_t *ptr) -> void {
        size_t vAddr = s->get_virtual_address();
        size_t fSize = s->get_file_size();
        size_t mSize = s->get_memory_size();
        Types::ubyte_t *loc = ptr + vAddr;

        memcpy(loc, s->get_data(), fSize);
        assert(mSize >= fSize && "Memory size is less than file size in ELF file");
        memset(loc + fSize, 0, mSize - fSize);
      };
      core.initMem(0, copySection);
    }
  }

  core.setPC(loader.get_entry());

  // Initialize $gp (global pointer) register from .reginfo section.
  auto RegInfoIt = std::find_if(loader.sections.begin(), loader.sections.end(),
                                [] (const ELFIO::section *s) {
                                  return s->get_name() == ".reginfo";
                                });
  assert(RegInfoIt != loader.sections.end() && "No .reginfo section");

  struct Elf32_RegInfo {
    ELFIO::Elf32_Word ri_gprmask;
    ELFIO::Elf32_Word ri_cprmask[4];
    ELFIO::Elf32_Sword ri_gp_value;
  };
  const Elf32_RegInfo *RegInfo = reinterpret_cast<const Elf32_RegInfo*>((*RegInfoIt)->get_data());
  assert(RegInfo->ri_gp_value && "GP should be initialized");
  core.setGP(RegInfo->ri_gp_value);
}

}

#endif
