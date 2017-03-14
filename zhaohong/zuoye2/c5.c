#include <stdio.h>

int main(void){
  int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,f,s,t;
  printf("Enter the first (single) digit:");
  scanf("%1d",&d);
  printf("Enter first group of five digits:");
  scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
  printf("Enter second group of five digits:");
  scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);

  f = d + i2 + i4 + j1 + j3 + j5;
  s = i1 + i3 + i5 + j2 + j4;
  t = 3 * f + s;
  printf("Check digit: %d\n",9-((t - 1) % 10));
  return 0;
}
