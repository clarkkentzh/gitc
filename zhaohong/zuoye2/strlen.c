#include <stdio.h>
#include <string.h>
void mystrlen(char * si){
  int i = 0;
  while(si[i] != '\0'){
    i++;
  }
  printf("len = %d\n",i);
}
int main(int argc,const char * argv[]){
  char si[35] = "hello  l";
  mystrlen(si);
  printf("mystrlen(si) = %lu\n",sizeof(si));

  return 0;
}
