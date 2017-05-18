main:
        jal fact
        addi $a0, $0, 6
        halt
fact:
fact_prol:
        addi $sp, $sp, -8
        sw $ra, 0($sp)
        sw $s0, 4($sp)
fact_begin:
        beq $a0, $0, fact_zero
        add $s0, $a0, $0
        jal fact
        addi $a0, $a0, -1
        mult $s0, $v0
        j fact_epil
        mflo $v0
fact_zero:
        j fact_epil
        addi $v0, $0, 1
fact_epil:
        lw $s0, 4($sp)
        lw $ra, 0($sp)
        jr $ra
        addi $sp, $sp, 8
