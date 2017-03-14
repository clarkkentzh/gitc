#include <stdio.h>

int main(void){
    int a[5] = {1,23,10,89,35};
    int i,j,t;
    for(i = 0;i < 4;i++){
      t = i;
      if(a[t] < a[i + 1]){
        t = i + 1;
      }
      /*  for(j = 0;j < 5 - i - 1;j++){
            if(a[j] < a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }*/
    }
    printf("max = %d\n",a[t]);
    return 0;
}
