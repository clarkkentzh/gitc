#include <stdio.h>

int main(void){
    int i = 10;
    while(i == 3){
        printf("helloworld!i\n");
    }
    printf("after\n");
    while(--i >= 0){
        printf("i = %d\n",i);
    }
    return 0;
}
