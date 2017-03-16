#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char * argv[]){
    char cmd[100];

    if(argc == 3){
        //sprintf(cmd,"rm -rf %s",argv[1]);
        //sprintf(cmd,"cp %s %s",argv[1],argv[2]);
        sprintf(cmd,"mv %s %s",argv[1],argv[2]);
        printf("cmd = %s\n",cmd);

        system(cmd);
    }
    else{
        printf("error!\n");
    }
    return 0;
}
