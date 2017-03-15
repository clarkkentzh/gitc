#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char * argv[]){
  char si[100];
  if(argc == 2){
    sprintf(si,"cat %s",argv[1]);
    system(si);
  }
  else{
    printf("Your shuru fault!");
  }
  return 0;
}
