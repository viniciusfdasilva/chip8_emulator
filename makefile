
CC=gcc


all:

	$(CC) $(PWD)/include/chip8/*.h $(PWD)/src/*.c -o chip8