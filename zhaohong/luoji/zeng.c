#include <stdio.h>

int main(){
    int a = 10, b = 10;
    int aa = 0, bb = 0;
    aa = a++;
    printf("aa = %d\n",aa);//10
    printf("a = %d\n",a);//11
    bb = ++b;
    printf("bb = %d\n",bb);//11
    printf("b = %d\n",b);//11

}
