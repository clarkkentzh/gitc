#include <stdio.h>

int main(void){
  int i,j,t;
  int a[5] = {1,2,3,1,1};
  int b[5] = {0};
  for(i = 0;i < 4;i++){
    t = i;
    for(j = i + 1;j < 5;j++){
      if(a[t] == a[j]){
        b[j] = 1;
        b[t] = 1;
      }
    }
  }
  for(i = 0;i < 5;i++){
    if(b[i]){
      printf("a[%d]\t",i);
    }
  }
  printf("\n");
  return 0;
}
