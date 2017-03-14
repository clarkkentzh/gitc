#include <stdio.h>

int main(){

    int a = -1;
    printf("a < 0 : %d\n",a < 0);

    if(a < 0)
    {    printf("a < 0 \n");
    }
    if(a > 0)
    {   printf("a > 0 \n");
    }
    if(a == 0)
    {   printf("a = 0 \n");}
    printf("a = %d\n",a);
    return 0;
}
