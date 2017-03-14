#include <stdio.h>

int main(){
    int a = 2,b = 3, c = 4;
    int n = 0;

    printf("(n = %d - %d) && (a > b) && (a > c) = %d\n",a,b,(n = a - b) && (a > b) && (a > c));
    printf("n = %d\n",n);

    int ret = (a > b) && (n = 10);
    printf("ret = %d,n = %d\n",ret,n);

}
