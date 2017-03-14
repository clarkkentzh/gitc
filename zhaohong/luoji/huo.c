#include <stdio.h>

int main(){
    int a = 2,b = 3,c = 4;
    int n = 0;

    printf("a || b = %d\n",a || b);
    printf("(a > b) || (a > c) = %d\n", (a > b) || (a > c));
    printf("(a < b) || (a > c) = %d\n", (a < b) || (a > c));
    printf("(n = a + b) || (a < b) = %d\n",(n = a + b) || (a < b));
    printf("n = %d\n", n);

}
