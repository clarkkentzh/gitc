#include <stdio.h>

int main(void){
  int (*fun)(int a,int b);
  int sum(int a,int b){
    return a + b;
  }
  int s;
  fun = sum;
  s = fun(10,20);
  printf("%d\n",s);
  return 0;
}
