#include <stdio.h>

int main(void){
    int i = 2;
    int j;
    int a;
    while(i <= 1000){
        a = 0;
        for(j = 1;j < i;j++){
            if(i % j == 0){
                a += j;
                //    printf("%d\t",i);
            }
        }

        if(a == i){
            printf("%d\t",a);
        }
        i++;
    }
    printf("\n");
    return 0;
}

