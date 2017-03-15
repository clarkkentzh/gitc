#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char c[100];
  fgets(c,64,stdin);
  printf("%s",c);
  return 0;
}
