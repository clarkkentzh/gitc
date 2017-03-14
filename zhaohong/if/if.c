#include <stdio.h>

int main(void){

    int a = 323;
    int b = 45;
    int c = 1;
    if(a > b){
        if(a > c){
        printf("max = %d\n",a);
        }
        else{
        printf("max = %d\n",c);
        }
    }
    else{
        if(b > c){
        printf("max = %d\n",b);
        }
        else{
        printf("max = %d\n",c);
        }
    }
}
