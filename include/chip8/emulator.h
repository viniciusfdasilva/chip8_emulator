#ifndef __EMULATOR_H__

    #include <stdnoreturn.h>
    #include <chip8/chip8.h>

    extern noreturn start_emulator(word* program);

#endif // __EMULATOR_H__