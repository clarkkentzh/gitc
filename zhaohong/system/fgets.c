#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
  char buf[100];
  char direct[100] = "mv ";
  char cl[100] = " ";
  while(fgets(buf,64,stdin) != NULL){
    printf("%d\n",buf[strlen(buf) - 1]);
    buf[strlen(buf) - 1] = '\0';
    strcat(direct,buf);
    strcat(direct,cl);
    strcat(buf,"-1");
    strcat(direct,buf);
    printf("%s\n",direct);
    system(direct);
    strcpy(direct,"mv \0");
  }
  return 0;
}
