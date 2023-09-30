#include <chip8/chip8.h>
#include <chip8/cpu.h>


noreturn f_clear()
{

}

noreturn f_return(){

}

noreturn f_jump(){

}

noreturn f_call_subroutine(){

}

noreturn f_if_not_equal_i(){

}

noreturn f_if_equal_i(){

}

noreturn f_if_not_equal_r(){

}

noreturn f_mov_i(){

}

noreturn f_add_i(){

}

noreturn f_mov_r(){

}

noreturn f_bitwise_or(){

}

noreturn f_bitwise_and(){

}

noreturn f_bitwise_xor(){

}

noreturn f_add_r(){

}

noreturn f_sub_r(){

}


noreturn decode(word program)
{
    uint8_t mask = 0xF;
    
    uint8_t arg0  =  (program >> 0x00)  & mask;
    uint8_t arg1  =  (program >> 0x04)  & mask;
    uint8_t arg2  =  (program >> 0x08)  & mask; 
    uint8_t opcode = (program >> 0x0C)  & mask;

    switch (opcode)
    {
    case 0x00:
    
        instructions[(opcode % 0x0D)];
        break;

    case 0x08:
    
        if(arg0 == 0x0E)
        {
            instructions[(opcode + 0x09)]();
        }else
        {
            instructions[(opcode + (arg0 + 0x01))]();
        }
        break;
    
    case 0x0E:
        break;

    case 0x0F:
        break;
    default:

        instructions[opcode]();
        break;
    }
}