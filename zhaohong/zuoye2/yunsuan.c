#include <stdio.h>

int main(void){
  float i,j;
  float a = 0,b = 0;
  int n = 20;
  float s;
  for(i = 1;i < 20;i += 2){
    a = a + 1 / i;
  }
  for(j = 2;j <= 20;j += 2){
    b = b + 1 / j;
  }
  s = a - b;
  printf("s(10) = %f\n",s);
  return 0;
}
