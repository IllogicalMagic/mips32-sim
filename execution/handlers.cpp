# Handlers description.
# Type mappings:
# dw_t ->dword_t;
# w_t -> word_t;
# hw_t -> hword_t;
# b_t -> byte_t.
# The prefix 'u' makes the type unsigned

# Special variables:
# rs, rt, rd, GPR, imm, HI, LO
# S. used for sysreg access

#Arithmetical instructions

addu:
{
  uw_t tmp = GPR[rs].u + GPR[rt].u;
  GPR[rd].u = tmp;
}

add:
{
  udw_t tmp = static_cast<udw_t>(GPR[rs].u) + GPR[rt].u;
  if (tmp & 0x100000000 != tmp & 0x80000000) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rd].u = tmp;
}

addi:
{
  dw_t tmp = static_cast<dw_t>(GPR[rs].u) + static_cast<dw_t>(imm);
  if (tmp & 0x100000000 != tmp & 0x80000000)
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rt].u = tmp;
}

addiu:
{
  uw_t tmp = GPR[rs].u + imm;
  GPR[rt].u = tmp;
}

sub:
{
  udw_t tmp = static_cast<udw_t>(GPR[rs].u) - GPR[rt].u;
  if (tmp & 0x100000000 != tmp & 0x80000000) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rd].u = tmp;
}

subu:
{
  uw_t tmp = GPR[rs].u - GPR[rt].u;
  GPR[rd].u = tmp;
}

andi:
{
  uw_t tmp = GPR[rs].u & imm;
  GPR[rt].u = tmp;
}

and:
{
  uw_t tmp = GPR[rs].u & GPR[rt].u;
  GPR[rd].u = tmp;
}

or:
{
  uw_t tmp = GPR[rs].u | GPR[rt].u;
  GPR[rd].u = tmp;
}

ori:
{
  uw_t tmp = GPR[rs].u | imm;
  GPR[rt].u = tmp;
}

xor:
{
  uw_t tmp = GPR[rs].u ^ GPR[rt].u;
  GPR[rd].u = tmp;
}

xori:
{
  uw_t tmp = GPR[rs].u ^ imm;
  GPR[rt].u = tmp;
}

mul:
{
  dw_t tmp = GPR[rs].s * GPR[rt].s;
  GPR[rd].s = tmp & 0xffffffff;
}

mult:
{
  dw_t prod = GPR[rs].s * GPR[rt].s;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

multu:
{
  udw_t prod = GPR[rs].u * GPR[rt].u;
  LO.u = prod & 0xffffffff;
  HI.u = prod >> 32;
}

div://sign of % is the same as divident
{
  if (GPR[rt].s == 0)
    return;
    
  dw_t div = GPR[rs].s / GPR[rt].s;
  dw_t rem = GPR[rs].s % GPR[rt].s;

  LO.s = div;
  HI.u = rem;
}

divu:
{
  if (GPR[rt].u == 0)
    return;
    
  uw_t div = GPR[rs].u / GPR[rt].u;
  LO.u = div;
  uw_t rem = GPR[rs].s % GPR[rt].s;
  HI.u = rem;
}

sll:
{
  uw_t tmp = GPR[rt].u << imm;
  GPR[rd].u = tmp;
}

sra:
{
  w_t tmp = GPR[rt].s >> imm;
  GPR[rd].s = tmp;
}

srl:
{
  uw_t tmp = GPR[rt].u >> imm;
  GPR[rd].u = tmp;
}

lui:
{
  uw_t tmp = imm << 16;
  GPR[rt].u = tmp;
}

#Not implemented by decoder yet

nor:
{
  uw_t tmp = ~(GPR[rs].u | GPR[rt].u);
  GPR[rd].u = tmp;
}

static inline uw_t ones(uw_t x) {
  x -= ((x >> 1) & 0x55555555);
  x = (((x >> 2) & 0x33333333) + (x & 0x33333333));
  x = (((x >> 4) + x) & 0x0f0f0f0f);
  x += (x >> 8);
  x += (x >> 16);
  return(x & 0x0000003f);
}

static inline uw_t l_zero(uw_t x) {
  x |= (x >> 1);
  x |= (x >> 2);
  x |= (x >> 4);
  x |= (x >> 8);
  x |= (x >> 16);
  return(32 - ones(x));
}

clo:
{
  uw_t res = l_zero(~GPR[rs].u);
  GPR[rd].u = res;
} 
    
clz:
{
  uw_t res = l_zero(GPR[rs].u);
  GPR[rd].u = res;
}

madd:
{
  dw_t prod = GPR[rs].s * GPR[rt].s;
  dw_t addent = HI.s << 32 + LO.s;
  prod += addent;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

maddu:
{
  udw_t prod = GPR[rs].u * GPR[rt].u;
  udw_t addent = HI.u << 32 + LO.u;
  prod += addent;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

msub:
{
  dw_t prod = GPR[rs].s * GPR[rt].s;
  dw_t res = HI.s << 32 + LO.s - prod;
  LO.s = res & 0xffffffff;
  HI.s = res >> 32;
}

msubu:
{
  udw_t prod = GPR[rs].u * GPR[rt].u;
  udw_t res = HI.u << 32 + LO.u - prod;
  LO.s = res & 0xffffffff;
  HI.s = res >> 32;
}

seb:
{
  b_t tmp = GPR[rt].s & 0xff;
  w_t res = tmp;
  GPR[rd].s = res;
}

seh:
{
  hw_t tmp = GPR[rt].s & 0xffff;
  w_t res = tmp;
  GPR[rd].s = res;
}

slt:
{
  w_t tmp = !!(GPR[rs].s < GPR[rt].s);
  GPR[rd].u = tmp;
}

slti:
{
  w_t tmp = !!(GPR[rs].s < imm);
  GPR[rt].u = tmp;
}

sltiu:
{
  w_t tmp = !!(GPR[rs].u < imm);
  GPR[rt].u = tmp;
}

sltu:
{
  w_t tmp = !!(GPR[rs].u < GPR[rt].u);
  GPR[rd].u = tmp;
}

rotr:
{
  w_t tmp = GPR[rt].u & (1 << imm - 1);
  GPR[rd].u = tmp << (32 - imm) + GPR[rt].u >> imm;
}

rotrv:
{
  w_t shift = GPR[rs].u & 0x1f;
  w_t tmp = GPR[rt].u & (1 << shift - 1);
  GPR[rd].u = tmp << (32 - shift) + GPR[rt].u >> shift;
}

sllv:
{
  w_t shift = GPR[rs].u & 0x1f;
  GPR[rd].u = GPR[rt].u << shift;
}

srav:
{
  w_t shift = GPR[rs].u & 0x1f;
  GPR[rd].u = GPR[rt].u >> shift;
}

srlv:
{
  w_t shift = GPR[rs].s & 0x1f;
  GPR[rd].s = GPR[rt].s >> shift;
}

#END OF Arithmetical
#Memory instructions

sw:
{
  uw_t vAddr = GPR[rs].u + static_cast<w_t>(imm);
  badVAddr = vAddr;
  if (vAddr & 0x3) {
    raiseException(ExcType::AddressError, ExcCode::AdES);
    return;
  }

  uw_t pAddr;
  auto excT = tlb->translate(vAddr, pAddr);
  if (excT != ExcType::None) {
    auto excC = (excT == ExcType::TLBMod) ? ExcCode::Mod : ExcCode::TLBS;
    raiseException(excT, excC);
    return;
  }

  *reinterpret_cast<uw_t *>(memory + pAddr) = GPR[rt].u;
}
