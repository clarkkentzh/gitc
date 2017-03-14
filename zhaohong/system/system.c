#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(void){
  system("tree");
  return 0;
}*/
int main(void){
  char b[100];
  fgets(b,64,stdin);
  printf("%s\n",b);
  return 0;
}
