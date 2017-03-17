#include <stdio.h>

int main(void){
/*  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p;
  int i;
  p = a;
  for(i = 0;i < 10;i++){
    printf("%d\t",*p);
    printf("%p\n",p);
    p++;
  }
  return 0;*/
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  char *p;
  int i;
  p = a;
  for(i = 0;i < 10;i++){
    printf("%d\t",*p);
    p += 4;
  }
  printf("\n");
  return 0;
}
