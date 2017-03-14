#include <stdio.h>

int main(void){
  int a[9] = {1,23,44,5,12,22,33,10,7};
  int i,j,t,h;
  for(i = 0;i < 9;i++){
    h = i;
    for(j = i + 1;j < 9;j++){
      if(a[h] > a[j]){
        h = j;
      }
    }
    if(h != i){
    t = a[i];
    a[i] = a[h];
    a[h] = t;
    }
  }
  for(i = 0;i < 9;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
  return 0;
}
