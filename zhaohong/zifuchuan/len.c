#include <stdio.h>
#include <string.h>

int main(int argc,const char * argv[]){
  char str[15] = "hello";
  int len = 0;
  len = strlen(str);
  printf("strlen(str) = %d\n",len);
  printf("strlen(str) = %lu\n",sizeof(str));
  return 0;
}
