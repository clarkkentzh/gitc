#include <stdio.h>
#include <string.h>

int main(int argc,const char * argv[]){
  char si[128] = "hello";
  char sl[128];
  strcpy(sl,si);
  printf("%s\n",sl);
  return 0;
}
