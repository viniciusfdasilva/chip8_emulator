#ifndef __CPU_H__
    #include<stdnoreturn.h>

    extern noreturn fetch();
    extern noreturn decode();

    #define NUM_INSTRUCTIONS 15
    
    extern noreturn f_clear();
    extern noreturn f_return();
    extern noreturn f_jump();
    extern noreturn f_call_subroutine();
    extern noreturn f_if_not_equal_i();
    extern noreturn f_if_equal_i();
    extern noreturn f_if_not_equal_r();
    extern noreturn f_mov_i();
    extern noreturn f_add_i();
    extern noreturn f_mov_r();
    extern noreturn f_bitwise_or();
    extern noreturn f_bitwise_and();
    extern noreturn f_bitwise_xor();
    extern noreturn f_add_r();
    extern noreturn f_sub_r();
    
    void (*instructions[NUM_INSTRUCTIONS])() = {
        f_clear,
        f_return,
        f_jump,
        f_call_subroutine,
        f_if_not_equal_i,
        f_if_equal_i,
        f_if_not_equal_r,
        f_mov_i,
        f_add_i,
        f_mov_r,
        f_bitwise_or,
        f_bitwise_and,
        f_bitwise_xor,
        f_add_r,
        f_sub_r,
    };
        //"",
        //"",
        //"",
        //f_if_equal_r,
        //"",
        //jump_to_v0,
#endif // __CPU_H__