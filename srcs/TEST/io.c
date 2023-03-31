#include "../../includes/testShell.h"
#include <stdlib.h>
#include <ctype.h>

bool idx_validCheck(char* idx) {
    // #2. idx가 숫자인가
    int idx_len = strlen(idx);
    // #2-1. idx 길이가 2자리를 넘어가면 false
    if(idx_len > 2) return false;
    // #2-2 idx 가 숫자가 아니면 false
    for(int i = 0; i < idx_len;i++){
        if(idx[i] < '0' || idx[i] > '9')
            return false;
    }
    // #2-3 숫자 범위가 안맞으면 false
    int tmp = atoi(idx);
    if(tmp < 0 || tmp > 99){
        return false;
    }
    return true;
}

bool val_validCheck(char* val) {
    // #1. 넣을 값의 길이가 10인가
    int len = strlen(val);
    if(len != 10)
		return false;
    // #2. val의 값이 숫자면 0~9사이인가? 알파벳이면 A~F 사이인가
	if (val[0] != '0' || val[1] != 'x')
		return false;
    for(int i = 2; i < len;i++){
        val[i] = toupper(val[i]);
        if((val[i] >= '0' && val[i] <= '9') || (val[i] >= 'A' && val[i] <= 'F'))
            continue;
        else
            return false;
    }
    return true;
}

// nand.txt에 
void writeSSD(int flag, char* val) {
    char idx[BUF_SIZE] = {0, };
    char tmp[BUF_SIZE] = {0, };
	char buf[BUF_SIZE] = {0, };
    if(flag){
        strcpy(tmp, val);
        for(int i = 0; i <= 5; i++) {
            sprintf(buf, "ssd W %d %s", i, tmp);
            printf("write: %s\n", buf);
            system(buf);
        }
    }
    else{
        scanf("%s %s", idx, tmp);
        if(val_validCheck(tmp) && idx_validCheck(idx)){
            int id = atoi(idx);
            sprintf(buf, "ssd W %d %s", id, tmp);
            printf("write: %s\n", buf); 
            system(buf);
        }
        else
            printf("%s\n", ERR);
    }
}

void readSSD(int flag) {
    char idx[BUF_SIZE] = {0, };
	char buf[BUF_SIZE] = {0, };

    if(flag){
        for(int i=0;i<=5;i++) {
            sprintf(buf,"ssd R %d", i);
            printf("read: %s\n", buf);
            system(buf);
        }
    }
    else{
        scanf("%s", idx);
        if(idx_validCheck(idx)){
            int id = atoi(idx);
            sprintf(buf, "ssd R %d", id);
            printf("read: %s\n", buf);
            system(buf);
        }
        else
            printf("%s\n", ERR);
    }
}