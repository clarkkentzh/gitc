#include <stdio.h>
#include <stdio.h>

void swap(int * p,int * q){
  int c;
  c = * p;
  * p = * q;
  * q = c;
  printf("a = %d\nb = %d\n",* p,* q);
}

int main(void){
  int a = 10;
  int b = 20;
  swap(&a,&b);
  return 0;
}
