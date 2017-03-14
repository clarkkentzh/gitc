#include <stdio.h>
#include <string.h>

void swap(int * p,int * q){
  int c ;
  c = * p;
  * p = * q;
  * q = c;
  printf("a = %d  b = %d\n",*p,*q);
}
int main(void){
  int a = 10;
  int b = 20;
  printf("a = %d  b = %d\n",a,b);
  swap(&a,&b);
  return 0;
}
