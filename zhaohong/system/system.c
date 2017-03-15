#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char * argv[]){
    char cmd[100];

    if(argc == 3){
      //  printf("%s\n",argv[1]);
      //  printf("%s\n",argv[2]);
        sprintf(cmd,"mv %s %s",argv[1],argv[2]);
        printf("cmd = %s\n",cmd);
      //  printf("cp %s %s",argv[1],argv[2]);
        system(cmd);
    }
    else{
        printf("error!\n");
    }
    return 0;
}
