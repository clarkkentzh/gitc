#include <stdio.h>

int main(void){
    int s[7] = {12,32,76,54,44,99,1};
    int i,j;
    int z;
    for(i = 0;i < 7;i++){
        for(j = 0;j < 7 - 1 - i;j++){
            if(s[j] > s[j + 1]){
                z = s[j];
                s[j] = s[j + 1];
                s[j + 1] = z;
            }
        }
    }
    for(i = 0;i < 7;i++){
        printf("s[%d] = %d  ",i,s[i]);
    }
    printf("\n");
    return 0;
}
