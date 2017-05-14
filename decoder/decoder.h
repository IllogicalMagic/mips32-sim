#ifndef SIM_MIPS32_DECODER_HEADER__
#define SIM_MIPS32_DECODER_HEADER__

#include <utility>
#include <array>
#include "../common/types.h"
#include "../common/insn.h"

namespace Decoder {
	namespace Commands {
		enum command_name {
		    addi =  0b001000, addiu = 0b001001,
		    b_andi = 0b001100,
		    b_ori = 0b001101,
		    b_xori = 0b001110,
		    lui =   0b001111,
		    lw =    0b100011, lh = 0b100001, lb = 0b100000,
		    lhu =   0b100101, lbu = 0b100100,
		    sw =    0b101011, sh = 0b101001, sb = 0b101000,
		    /*b,*/ beq = 0b000100, bne = 0b000101,
		    j =     0b000010, jal = 0b000011	//jump operations
		};
		enum spec_command_name {	//arithmetical register operations, opcode = 0
		    add =   0b100000, addu = 0b100000,
		    sub =   0b100010, subu = 0b100011,
		    mult =  0b011000, multu = 0b011001,
		    div =   0b011010, divu = 0b011011,
		    b_and =   0b100100,
		    b_or =    0b100101,
		    b_xor =   0b100110,
		    sll =   0,
		    sra = 0b000011, srl = 0b000010,
		    mfhi =  0b010000, mflo = 0b010010
		};
		enum cop0_command_name {	//tlb operations
			tlbp = 	0b001000, tlbr = 0b00001,
			tlbwi = 0b000010, tlbwr = 0b000110
		};	//!!!conflicts with RDPGPR, MTC0, MFC0, ERET, EI, DI, DERET

		enum cmd_type{
		    CMD, SPEC_CMD, COP_CMD
		};
	}

    constexpr int WORD_LEN = 32;

    using std::pair;
    using bit_range = pair<int, int>;    //range [a, b)
    //!!!used in get_bits

    constexpr bit_range op_range = {26, WORD_LEN};
    constexpr bit_range address_range = {0, 26};
    constexpr bit_range rs_range = {21, 26}, rt_range = {16, 21}, rd_range = {11, 16};
    constexpr bit_range shift_range = {6, 11};
    constexpr bit_range func_range = {0, 6};

    constexpr std::array<Commands::spec_command_name, 3> shift_cmds = {Commands::sll, Commands::sra, Commands::srl};
    constexpr std::array<Commands::command_name, 7> signed_ops = {
        Commands::addi, Commands::b_andi, Commands::b_ori, Commands::b_xori,
        Commands::lw, Commands::lh, Commands::lb };

  	Instruction decode_word(word_type word);
    uword_t get_bits(bit_range range, word_type from);
};

#endif  //SIM_MIPS32_DECODER_HEADER__