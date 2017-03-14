#include <stdio.h>

int main(void){
    int i,j;
    int a = 0;

    for(i = 50;i < 100;i++){
        a = i;
        for(j = 1;j <= i;j++){
            if(a % j == 0){
                a = a / j;
                printf("%d*",j);
            }
            if(a <= j){
                printf("%d",a);
                break;
            }
        }
    printf("\n");
    }

    return 0;
}
