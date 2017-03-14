#include <stdio.h>

int main(void){
    int a = 10;
    while(a >= 0){
        if(a == 5){
            break;
        }
        printf("a = %d\n",a);
        a--;
    }
    printf("after\n");
    return 0;
}
