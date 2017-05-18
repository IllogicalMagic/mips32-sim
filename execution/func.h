#ifndef SIM_MIPS32_HANDLERS_FUNC_H__
#define SIM_MIPS32_HANDLERS_FUNC_H__

namespace Simulator { namespace Core {

using namespace Types;

static inline uword_t ones(uword_t x) {
  x -= ((x >> 1) & 0x55555555);
  x = (((x >> 2) & 0x33333333) + (x & 0x33333333));
  x = (((x >> 4) + x) & 0x0f0f0f0f);
  x += (x >> 8);
  x += (x >> 16);
  return(x & 0x0000003f);
}

static inline uword_t l_zero(uword_t x) {
  x |= (x >> 1);
  x |= (x >> 2);
  x |= (x >> 4);
  x |= (x >> 8);
  x |= (x >> 16);
  return(32 - ones(x));
}

static inline uword_t arithmetic_rshift(uword_t word, int n) {
  char  gr_dec = word & 0x80000000;
  return gr_dec & (word >> 1);
}

} } //namespace Simulator::Core

#endif
