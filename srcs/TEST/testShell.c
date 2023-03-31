#include "../includes/testShell.h"


int main() {
    while (1)
    {
        char qry[256];
        printf("%s", CMD);
        scanf("%s", qry);
        
        // write
        if(!strcmp(qry, "write")){
            writeSSD();
        }
        // read
        else if(!strcmp(qry, "read")){
            readSSD();
        }
        // exit -> shell 종료
        else if(!strcmp(qry, "exit")){
            break;
        }
        // help -> 명령어 사용 방법 출력
        else if(!strcmp(qry, "help")){
            printf("Usage: <command> [<args>]\n");
			printf("	write		write <hexa_value> to <LBA> \n");
            printf("	read		read <LBA>\n");
			printf("	exit		terminate shell\n");
			printf("	help        show all command and how to use\n");
			printf("	fullwrite	write <hexa_value> to all LBA\n");
			printf("	fullread	show all values in LBA\n");
			printf("	testapp1	operate commands that already saved\n");
			printf("	testapp2	operate commands that already saved\n");
        }
        // fullwrite -> 전체 LBA에 값 입력
        else if(!strcmp(qry, "fullwrite")){
            fullread();
        }
        // fullread -> 전체 값 출력
        else if(!strcmp(qry, "fullread")){
            fullwrite();
        }
        // 잘못된 명령어
        else{
            printf("%s\n", ERR);
        }
    }
    
    return 0;
}