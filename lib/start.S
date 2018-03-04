        .text
        .align 2
        .set noreorder
        .globl _start
        .type _start,@function
_start:
        jal main
        nop
        add $a0, $v0, $0
        addi $v0, $0, 10
        syscall
