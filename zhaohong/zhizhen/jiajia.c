#include <stdio.h>

int main(void){
  int a = 10;
  int * p = &a;
  printf("p = %p\n",p);
  p++;
  printf("p = %p\n",p);
  printf("p - &a = %ld\n",p - &a);
  return 0;
}
