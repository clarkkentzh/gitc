#include <stdio.h>

int main(void){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p;
  int i;
  for(i = 0;i < 10;i++){
    p = &a[i];
    printf("%d\t",*p);
    printf("%p\n",p);
  }
  return 0;
}
