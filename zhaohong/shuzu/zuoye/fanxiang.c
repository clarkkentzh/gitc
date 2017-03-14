#include <stdio.h>

int main(void){
  int a[5] = {2,3,4,5,6};
  int i;
  printf("a[5] ={");
  for(i = 0;i < 4;i++){
    printf("%d,",a[i]);
  }
  printf("%d}\na[5] ={",a[4]);
  for(i = 4;i > 0;i--){
    printf("%d,",a[i]);
  }
  printf("%d}\n",a[0]);
  return 0;
}
