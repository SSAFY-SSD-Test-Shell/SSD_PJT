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
void writeSSD();
void readSSD();

// full_io.c
void fullwrite();
void fullread();

// test.c
void testapp1();
void testapp2();

#endif