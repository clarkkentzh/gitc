#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
  char si[100];
  char sl[100] = "mv ";
  char cl[100] = " ";
  while(fgets(si,64,stdin) != NULL){
    si[strlen(si) - 1] = '\0';
    strcat(sl,si);
    strcat(sl,cl);
    strcat(si,"-1");
    strcat(sl,si);
    printf("%s\n",sl);
    system(sl);
    strcpy(sl,"mv \0");
  }
  return 0;
}
