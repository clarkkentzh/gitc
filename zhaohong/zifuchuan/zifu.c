#include <stdio.h>
#include <string.h>

int main(int a,const char *argv[]){
  int i,j;
  printf("argc = %d\n",a);
  for(i = 0;i < a;i++){
    for(j = 0;j < 7;j++){
      printf("argv[%d][%d] = %c\n",i,j,argv[i][j]);
    }
  }
  return 0;
}
