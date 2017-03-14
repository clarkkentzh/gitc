#include <stdio.h>

int main(){
    int i;
    int n = 0;
    int m = 1;
   /* for(i = 1;i <= 10;i++){
        n = n + i;
    }
    printf("n = %d\n",n);

    for(i = 1;i <= 10;i++){
        m = m * i;
    }
    printf("m = %d\n",m);*/

    for(i = 1;i <= 10;i++){
        m = m * i;
        n = n + m;
    }
    printf("n = %d\n",n);
}
