#include <stdio.h>

int main(void){
  int *p;
  double *p1;
  float *p2;
  char *p3 = NULL;

  int a = 10;
  double b = 13.123;
  float c = 1.23;

  p = &a;
  p1 = &b;
  p2 = &c;

  printf("p = %p\np1 = %p\np2 = %p\np3 = %p\n",p,p1,p2,p3);
  return 0;
}
