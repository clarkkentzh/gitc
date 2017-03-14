#include <stdio.h>
#include <string.h>

void cat(char * si,char * sl){
  strcat(si,sl);
  printf("%s\n",si);
}

int main(int argc,const char * argv[]){
  char si[128] = "hello ";
  char sl[128] = "world";
  cat(si,sl);
/*  strcat(si,sl);
  printf("%s\n",si);
  strcat(sl,si);
  printf("%s\n",sl);*/
  return 0;
}
