#include <stdio.h>
#include <string.h>

int main(int argc,const char * argv[]){
  char si[15] = "hello";
  char sl[15] = "world";
  char h[30];
  sprintf(h,"%s %d",si,123);
  printf("%s\n",h);
  return 0;
}
