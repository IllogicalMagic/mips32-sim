#include "decoder.h"
#include <iostream>

using namespace Decoder;

bool test (bool cond, Instruction & instr) {
	if (cond)
		std::cout << "Passed\n";
	else 
		std::cout << "Failed! Got: Opcode, type = 0" << std::oct << instr.op << ", 0" << instr.type << std::dec;
	std::cout << std::endl;
	return cond;
}

int main() {
	auto instr = decode_word(0b00000001000001000001000000100000); //ADD 2, 8, 4
	std::cout << "Rd, rs, rt " << std::hex << instr.rd << " " << instr.rs << " " << instr.rt << std::endl;
	std::cout << std::dec;
	test (instr.type == Commands::SPEC_CMD && instr.op == Commands::add, instr);
	
	instr = decode_word(0b00000000000100001010000101000011);	//SRA 20, 16, 5
	std::cout << "Rd, rt, sa " << instr.rd << " " << instr.rt << " " << instr.imm << std::endl;
	test (instr.type == Commands::SPEC_CMD && instr.op == Commands::sra, instr);
	
	instr = decode_word(0b00001110000000000000000000000000);	//SRA 20, 16, 5
	std::cout << "target " << instr.imm << std::endl;
	test(instr.type == Commands::CMD && instr.op == Commands::jal, instr);
		std::cout << "Right opcode and command type\n" << std::endl;
	
	instr = decode_word(0b00100001000001001000000000000001); //ADDI 4,8, -32767
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test (instr.type == Commands::CMD && instr.op == Commands::addi, instr);
		
	instr = decode_word(0b00100101000001001000000000000001); //ADDIU 4,8, 32769
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test (instr.type == Commands::CMD && instr.op == Commands::addiu, instr);

	instr = decode_word(0b00010001000001001000000000000000); //BEG 4, 8, 131072
	std::cout << "rt, rs, imm = " << instr.rt << " " << instr.rs << " " << instr.imm << std::endl;
	test(instr.type == Commands::CMD && instr.op == Commands::beq, instr);

	return 0;
}