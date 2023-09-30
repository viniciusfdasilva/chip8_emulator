#include <chip8/emulator.h>
#include <chip8/cpu.h>

noreturn start_emulator(word* program)
{
    decode(program);
}