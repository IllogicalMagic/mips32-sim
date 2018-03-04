#include <elf.h>
#include <elfio/elfio.hpp>

#include "loader.h"
#include "support/error.h"

namespace Loader {

// Initialize elfio class and check for MIPS ELF executable.
void loadMipsELF(ELFIO::elfio &loader, const char *fIn) {
  if (!loader.load(fIn))
    PRINT_ERROR("Can't load ELF file %s\n", fIn);

  if (loader.get_machine() != EM_MIPS)
    PRINT_ERROR("ELF file is not for MIPS\n");

  if (loader.get_type() != ET_EXEC)
    PRINT_ERROR("ELF file is not an executable\n");

  if (loader.get_class() != ELFCLASS32)
    PRINT_ERROR("ELF file is not 32-bit file\n");

  if (loader.get_encoding() != ELFDATA2LSB)
    PRINT_ERROR("Only little-endian encoding is supported\n");
}

void checkMemLimits(ELFIO::elfio &loader, size_t memSize) {
  size_t maxMem = 0;
  for (const ELFIO::segment *s : loader.segments) {
    size_t sMemPeak = s->get_virtual_address() + s->get_memory_size();
    if (sMemPeak > maxMem)
      maxMem = sMemPeak;
  }
  if (maxMem > memSize) {
    PRINT_ERROR("Not enough simulator memory to load ELF image\n");
  }
}

} // namespace Loader
