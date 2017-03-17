#include <stdio.h>

int main(void){
  int i,j,k,l;
  scanf("%d",&j);
  i = 1;
  k = 3;
  for(l = 1;i <= j;k += 2){
    printf("%10d%10d\n",i,l);
    ++i;
    l += k;
  }
  return 0;
}
