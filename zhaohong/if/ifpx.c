#include <stdio.h>

int main(void){

    int a = 34,b = 45,c = 532;
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    if(a < b){
        if(a < c){
            if(b > c){
            printf("b > c > a\n");
            }
            else
            {printf("c > b > a\n");
            }
        }
        else
        {printf("b > a > c\n");
        }
    }
    else
    {
        if(a < c){
            printf("c > a > b\n");
                }
        else
        {
            if(b > c){
        printf("a > b > c\n");
            }
            else
            {printf("a > c > b\n");
            }
        }
    }
}
