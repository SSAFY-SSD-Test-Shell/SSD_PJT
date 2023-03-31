#include "../includes/testShell.h"

void fullwrite() {
    char val[BUF_SIZE] = {0, };
    char buf[BUF_SIZE] = {0, };
    scnaf("%s", val);
    if(val_validCheck(val)){
        for(int i =0;i<100;i++){
            sprintf(buf, "./ssd W %d %s", i, val);
            printf("write: %s\n", buf); 
            // system(buf);
        }
    }
}

void fullread() {
    FILE* fp = fopen("./nand.txt", "r");
    for(int i=0;i<100;i++){
        char buf[BUF_SIZE] = { 0, };
        fgets(buf, 1000, fp);
        printf("%s", buf);
    }
}