#include "decoder.h"
#include <iostream>

using namespace Simulator::Types;
using namespace Simulator::Decoder;

bool test (bool cond, Insn & instr) {
	if (cond)
		std::cout << "Passed\n";
	else 
		std::cout << "Failed! Got: Opcode = 0" << std::hex << instr.op << std::dec;
	std::cout << std::endl;
	return cond;
}

int main() {
	auto instr = decode_word(0b00000001000001000001000000100000); //ADD 2, 8, 4
	std::cout << "Rd, rs, rt " << std::hex << instr.rd << " " << instr.rs << " " << instr.rt << std::endl;
	std::cout << std::dec;
	test (instr.op == OpTypes::Add, instr);
	
	instr = decode_word(0b00000000000100001010000101000011);	//SRA 20, 16, 5
	std::cout << "Rd, rt, sa " << instr.rd << " " << instr.rt << " " << instr.imm << std::endl;
	test (instr.op == OpTypes::Sra, instr);
	
	instr = decode_word(0b00001110000000000000000000000000);	//JAL
	std::cout << "target " << instr.imm << std::endl;
	test (instr.op == OpTypes::Jal, instr);
	
	instr = decode_word(0b00100001000001001000000000000001); //ADDI 4,8, -32767
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test (instr.op == OpTypes::Addi, instr);
		
	instr = decode_word(0b00100101000001001000000000000001); //ADDIU 4,8, 32769
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test (instr.op == OpTypes::Addiu, instr);

	instr = decode_word(0b00010001000001001000000000000000); //BEQ 4, 8, 131072
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test (instr.op == OpTypes::Beq, instr);
	
	instr = decode_word(0b11111100000000000000000000000000); //HALT
	test (instr.op == OpTypes::Halt, instr);
	
	instr = decode_word(0b00000000001000100001100000000110); //SRLV
	std::cout << "rt, rs, rd = " << instr.rt << " " << instr.rs << " " << instr.rd << std::endl;
	test (instr.op == OpTypes::Srlv, instr);
	
	instr = decode_word(0b00000000001000100001100001000010); //ROTR 2, 3, 1
	std::cout << "rt, rd, shift = " << instr.rt << " " << instr.rd << " " << instr.imm << std::endl;
	test (instr.op == OpTypes::Rotr, instr);

	return 0;
}
