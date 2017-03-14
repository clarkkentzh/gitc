#include <stdio.h>

int main(void){
    int i;
    int j;
    int t;
    for(i = 50;i <= 100;i++){
        for(j = 2;j < i;j++){
            if(i % j == 0){
                break;
            }
        }
        if(j == i){
            printf("%d = 1 * %d\n",i,i);
            continue;
        }
        t = i;
        printf("%d = 1 * ",t);
        for(j = 2;j < i;j++){
            for(;t % j == 0;){
                printf("%d ",j);
                t = t / j;
                if(t != 1){
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
