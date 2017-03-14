#include <stdio.h>
#include <string.h>
int mystrlen(const char * si){
  int i = 0;
  while(si[i] != '\0'){
    i++;
  }
  return i;
}
int main(int argc,const char * argv[]){
  char si[35] = "hello  l";
  int i = 0;
  int r;
  r = mystrlen(si);
  printf("mystrlen(si) = %d\n",r);
  printf("mystrlen(si) = %lu\n",sizeof(si));

  return 0;
}
