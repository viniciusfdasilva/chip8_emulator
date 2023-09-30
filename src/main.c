#include <chip8/emulator.h>
#include <chip8/chip8.h>
#include <stdio.h>
//noreturn usage()
//{
//    
//}



word* get_program(char* filename)
{
    FILE *file;
    char line[100];

    file = fopen(filename, "r");

    if(file == -1)
    {
        printf("Open file error\n"); 
        return 1;
    }

    while(fgets(line, sizeof(line), file) != NULL)
    {

    }

    fclose(file);
}

int main(int argc, char** argv)
{
    usage();

    if(argc > 1)
    {
        word* program = get_program(argv[1]);
        start_emulator(program);
    }
    
    return 0;
}