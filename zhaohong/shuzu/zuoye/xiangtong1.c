#include <stdio.h>

int main(void){
  int i,j,t;
  int a[9] = {1,2,3,3,2,1,1,2,3};
  int b[9] = {0};
  for(i = 0;i < 9;i++){
    t = i;
    for(j = i + 1;j < 9;j++){
      if(a[t] == a[j]){
        b[j] = a[j];
        b[t] = a[j];
      }
    }
  }
  for(j = 1;j < 4;j++){
    printf("%d = ",j);
   for(i = 0;i < 9;i++){
    if(b[i] == j){
      printf("a[%d] ",i);
    }
  }
  printf("\n");
}
  /*for(i = 0;i < 9;i++){
    if(b[i] == 2){
      printf("a[%d]\t",i);
    }
  }
  printf("\n");
  for(i = 0;i < 9;i++){
    if(b[i] == 3){
      printf("a[%d]\t",i);
    }
  }
  printf("\n");*/
  return 0;
}
