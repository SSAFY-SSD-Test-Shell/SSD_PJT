#ifndef __SSD_H
#define __SSD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 256
void    writeLBA(int num, char *val);
void    readLBA(int num);

#endif