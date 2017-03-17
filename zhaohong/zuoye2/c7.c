#include <stdio.h>

int main(void){
  int i,n;
  scanf("%d",&n);
  for(i = 0;i <= n;i++){
    printf("%10d%10d\n",i,i * i);
  }
  return 0;
}
