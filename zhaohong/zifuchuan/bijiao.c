#include <stdio.h>
#include <string.h>

int main(int argc,const char * argv[]){
  char si[128] = "abcdfe";
  char sl[128] = "abcde";
  int s;
  s = strcmp(si,sl);
  printf("%d\n",s);
  return 0;
}
