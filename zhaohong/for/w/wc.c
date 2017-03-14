#include <stdio.h>

int main(void){
    int a = 10;
    while(a >= 0){
        if(a >= 5){
            a--;
            continue;
        }
        printf("a = %d\n",a);
        a--;
    }
    return 0;
}
