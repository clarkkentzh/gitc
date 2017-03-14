#include <stdio.h>
#include <string.h>
char  mystrcat(char * si,const char * sl){
  int i = 0;
  int len;
  len = strlen(si) - 1;
  while(sl[i] != '\0'){
    si[len + 1 + i] = sl[i];
    i++;
  }
  printf("%s\n",si);
}
int main(int argc,const char * argv[]){
  char a[128] = "hello ";
  char b[128] = "world";
  mystrcat(a, b);
  //printf("%s\n",c);
  return 0;
}
