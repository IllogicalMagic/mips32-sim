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
