# Handlers description.
# Type mappings:
# wd_t ->dword_t;
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
  if (tmp & 0x10000000) {
    raiseException(ExcType::IntegerOverflow, ExcCode::Ov);
    return;
  }
  GPR[rd].u = tmp;
}
