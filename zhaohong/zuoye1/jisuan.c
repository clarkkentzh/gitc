#include <stdio.h>

int main(){
    int i,j;
    int f = 0;
        for(i = 2;i < 100;i++){
            f = 0;
            for(j = 2;j <= i - 1;j++){
                if(i % j == 0){
                    f = 1;
                }
            }
            if(f == 0){
                printf("%d ",i);
            }
        }
        printf("\n");
}
