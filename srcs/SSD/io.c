#include "../../includes/ssd.h"

void writeLBA(int LBA, char* val) {
    char buf[100][BUF_SIZE] = { 0, };
    FILE *fp = fopen("./nand.txt", "r+");
    for(int i = 0;i < 100;i++){
        fgets(buf[i], BUF_SIZE, fp);
    }
    strcpy(buf[LBA], val);
    int len = strlen(buf[LBA]);
    buf[LBA][len] = '\n';
    buf[LBA][len + 1] = 0;
    fclose(fp);
    fp = fopen("./nand.txt", "w");
    for(int i=0;i<100;i++){
        // printf("%s\n", buf[i]);
        fputs(buf[i], fp);
    }
    // printf("buf: %s\n", buf);
    // fseek(fp, 11, SEEK_SET);
    // fputs(val, fp);
    // fwrite(val, 1, 11, fp);
    fclose(fp);
}

void readLBA(int LBA) {
    FILE *nfp = fopen("./nand.txt", "r");
    FILE *rfp = fopen("./result.txt", "w+t");

    char nbuf[BUF_SIZE] = { 0, };
    char rbuf[BUF_SIZE] = { 0, };

    for(int i = 0;i < LBA + 1; i++){
        fgets(nbuf, BUF_SIZE, nfp);
    }
    strcpy(rbuf, nbuf);
    fputs(rbuf, rfp);

    printf("%s", rbuf);
    fclose(nfp);
    fclose(rfp);
}