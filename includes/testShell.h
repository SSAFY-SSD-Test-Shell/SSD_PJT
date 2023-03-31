#ifndef TEST_SHELL_H
#define TEST_SHELL_H
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#define BUF_SIZE 256
#define CMD "testShell >> "
#define ERR "INVALID COMMAND"

// io.c
bool idx_validCheck(char* idx);
bool val_validCheck(char* val);
void writeSSD(int flag, char* val);
void readSSD(int flag);

// full_io.c
void fullwrite(int testFlag);
void fullread();

// test.c
void testapp1();
void testapp2();

#endif