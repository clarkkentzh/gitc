#include <stdio.h>

int main(){
    int a = 2,b = 0,c = 3;
    int n = 0;
    printf("a && b = %d\n", a && b);
    printf("a && c = %d\n", a && c);
    printf("a && b && c =%d\n",a && b && c);
    printf("(n = 10) && b ===>> %d\n", (n = 10) && b);
    printf("n = %d\n",n);

}
