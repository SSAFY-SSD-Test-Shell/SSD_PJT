#include "../includes/ssd.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 1. argc의 개수가 4개면 write
    // 2. argc의 개수가 3개면 read
    // 공통적인 부분 -> #LBA
    int LBA = atoi(argv[2]);
    if (argc == 4)
        writeLBA(LBA, argv[3]);
    else
        readLBA(LBA);
    return 0;
}