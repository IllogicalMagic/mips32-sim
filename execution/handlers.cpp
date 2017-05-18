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

#Arithmetic instructions

addu:
{
  uw_t tmp = GPR[rs].u + GPR[rt].u;
  GPR[rd].u = tmp;
}

add:
{
  dw_t tmp = static_cast<dw_t>(GPR[rs].s) + GPR[rt].s;
  if ((tmp & 0x100000000) >> 32 != (tmp & 0x80000000) >> 31) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rd].s = static_cast<w_t>(tmp);
}

addi:
{
  dw_t tmp = static_cast<dw_t>(GPR[rs].s) + imm;
  if ((tmp & 0x100000000) >> 32 != (tmp & 0x80000000) >> 31) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rt].s = static_cast<w_t>(tmp);
}

addiu:
{
  uw_t tmp = GPR[rs].u + imm;
  GPR[rt].u = tmp;
}

sub:
{
  dw_t tmp = static_cast<dw_t>(GPR[rs].s) - GPR[rt].s;
  if ((tmp & 0x100000000) >> 32 != (tmp & 0x80000000) >> 31) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rd].s = static_cast<w_t>(tmp);
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
  dw_t tmp = static_cast<dw_t>(GPR[rs].s) * GPR[rt].s;
  GPR[rd].s = tmp & 0xffffffff;
}

mult:
{
  dw_t prod = static_cast<dw_t>(GPR[rs].s) * GPR[rt].s;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

multu:
{
  udw_t prod =  static_cast<dw_t>(GPR[rs].s) * GPR[rt].u;
  LO.u = prod & 0xffffffff;
  HI.u = prod >> 32;
}

div://sign of % is the same as divident
{
  if (GPR[rt].s == 0)
    return;
    
  w_t div = GPR[rs].s / GPR[rt].s;
  w_t rem = GPR[rs].s % GPR[rt].s;
  LO.s = div;
  HI.s = rem;
}

divu:
{
  if (GPR[rt].u == 0)
    return;
    
  uw_t div = GPR[rs].u / GPR[rt].u;
  uw_t rem = GPR[rs].s % GPR[rt].s;
  LO.u = div;
  HI.u = rem;
}

sll:
{
  uw_t tmp = GPR[rt].u << imm;
  GPR[rd].u = tmp;
}

sra:
{
  uw_t tmp = r_shift(GPR[rt].u, imm);
  GPR[rd].u = tmp;
}

srl:
{
  uw_t tmp = GPR[rt].u >> imm;
  GPR[rd].u = tmp;
}

lui:
{
  uw_t tmp = static_cast<uw_t>(imm) << 16;
  GPR[rt].u = tmp;
}

nor:
{
  uw_t tmp = ~(GPR[rs].u | GPR[rt].u);
  GPR[rd].u = tmp;
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
  dw_t prod =  static_cast<dw_t>(GPR[rs].s) * GPR[rt].s;
  dw_t addent =  (static_cast<dw_t>(HI.s) << 32) + LO.s;
  prod += addent;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

maddu:
{
  udw_t prod = GPR[rs].u * GPR[rt].u;
  udw_t addent = (static_cast<udw_t>(HI.s) << 32) + LO.u;
  prod += addent;
  LO.s = prod & 0xffffffff;
  HI.s = prod >> 32;
}

mfhi:
{
  GPR[rd].u = HI.u;
}

mflo:
{
  GPR[rd].u = LO.u;
}

msub:
{
  dw_t prod = GPR[rs].s * GPR[rt].s;
  dw_t res = (static_cast<dw_t>(HI.s) << 32) + LO.s - prod;
  LO.s = res & 0xffffffff;
  HI.s = res >> 32;
}

msubu:
{
  udw_t prod = GPR[rs].u * GPR[rt].u;
  udw_t res = (static_cast<udw_t>(HI.s) << 32) + LO.u - prod;
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
  GPR[rd].u = (GPR[rs].s < GPR[rt].s);
}

slti:
{
  GPR[rt].u = (GPR[rs].s < imm);
}

sltiu:
{
  GPR[rt].u = (GPR[rs].u < static_cast<uw_t>(imm));
}

sltu:
{
  GPR[rd].u = (GPR[rs].u < GPR[rt].u);
}

rotr:
{
  w_t tmp = GPR[rt].u & ((1 << imm) - 1);
  GPR[rd].u = (tmp << (32 - imm)) + (GPR[rt].u >> imm);
}

rotrv:
{
  w_t shift = GPR[rs].u & 0x1f;
  w_t tmp = GPR[rt].u & ((1 << shift) - 1);
  GPR[rd].u = (tmp << (32 - shift)) + (GPR[rt].u >> shift);
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
  GPR[rd].u = r_shift(GPR[rt].u, shift);
}

#END OF Arithmetical
#Memory instructions

lw:
{
  uw_t vAddr = GPR[rs].u + static_cast<w_t>(imm);
  badVAddr = vAddr;
  if (vAddr & 0x3) {
    raiseException(ExcType::AddressError, ExcCode::AdEL);
    return;
  }

  uw_t pAddr;
  auto excT = tlb->translate(vAddr, pAddr);
  if (excT != ExcType::None) {
    raiseException(excT, ExcCode::TLBL);
    return;
  }

  GPR[rt].u = *reinterpret_cast<uw_t *>(memory + pAddr);
}

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

#Branch instructions

beq:
{
  nextPC = PC + imm;
  executeDelaySlotInsn(GPR[rs].u == GPR[rt].u);
}

j:
{
  nextPC = ((PC - 4) & ~0x7FFFFFF) + imm;
  executeDelaySlotInsn(true);
}

jal:
{
  // Since we increment PC before executing insn there should be + 4
  GPR[Synonyms::RA].u = PC + 4;
  nextPC = ((PC - 4) & ~0x7FFFFFF) + imm;
  executeDelaySlotInsn(true);
}

jr:
{
  nextPC = GPR[rs].u;
  executeDelaySlotInsn(true);
}

halt:
{
  run = false;
}
