#include <stdio.h>

int main(void){
    char a;
    int i = 0;
    a = getchar();
    while(a != EOF){
        if(a == 10){
            i += 1;
        }
        a = getchar();
    }
    printf("%d\n",i);
    return 0;
}
