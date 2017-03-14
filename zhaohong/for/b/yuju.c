#include <stdio.h>

int main(){
    int i,j;
    for(j = 0;j < 3;j++){
        printf("j = %d\n",j);
        for(i = 0;i < 10;i++){
            if(i == 5){
                break;
            }
            printf("i = %d\t",i);
        }
        printf("\n");
    }
}
