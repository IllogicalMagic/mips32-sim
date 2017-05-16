# Handlers description.
# Type mappings:
# dw_t ->dword_t;
# w_t -> word_t;
# hw_t -> hword_t;
# b_t -> byte_t.
# Special variables:
# rs, rt, rd, GPR.
# S. used for sysreg access

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

#mul

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

div:
{
  if (GPR[rt].s == 0) {
    LO.u = 0;
    HI.u = 0;
    return;
  }
    
  dw_t div = GPR[rs].s / GPR[rt].s;
  LO.s = div;
  dw_t rem = GPR[rs].s % GPR[rt].s;
  HI.u = rem;
}

divu://TODO fix non-mathematical behaviour of %
{
  if (GPR[rt].u == 0) {
    LO.u = 0;
    HI.u = 0;
    return;
  }
    
  uw_t div = GPR[rs].u / GPR[rt].u;
  LO.u = div;
  uw_t rem = GPR[rs].s % GPR[rt].s;
  HI.u = rem;
}
