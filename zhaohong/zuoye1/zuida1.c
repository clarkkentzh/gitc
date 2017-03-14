#include <stdio.h>

int main(){
    int a = 20,b = 34, c = 23;
    int m = 0;
    m = (a > c)? a : c;
    printf("zui da zhi:m = %d\n",m);

    m = (a > b)?((a > c)?a:c):((b > c)?b:c);
    printf("zui da zhi:m = %d\n",m);

}
