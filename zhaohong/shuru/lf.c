#include <stdio.h>

int main(void){
    char c;
    c = getchar();
    while(c != EOF){
        printf("char = %c\tc(10) = %d\n",c,c);
        c = getchar();
    }
    printf("\n");
    return 0;
}
