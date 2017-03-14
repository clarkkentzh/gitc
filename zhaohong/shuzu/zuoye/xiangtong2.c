#include <stdio.h>

int main(void){
  int i,j;
  int a[9] = {1,2,3,4,2,1,3,1,2};
  for(i =1;i < 10;i++){
    printf("%d =",i);
    for(j = 0;j < 9;j++){
      if(a[j] == i){
        printf("a[%d] ",j);
      }
    }
    printf("\n");
  }
  return 0;
}
