#include <stdio.h>
#include <string.h>
int mystrcpy(char * sl,const char * si){
  int i = 0;
  while(si[i] != '\0'){
    sl[i] = si[i];
    i++;
  }
}
int main(int argc,const char *argv[]){
  char si[128] = "hellosdfsd";
  char sl[128];
  mystrcpy(sl,si);
  printf("%s\n",sl);
}
