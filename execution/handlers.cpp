# Handlers description.
# Type mappings:
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

