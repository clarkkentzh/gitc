#include <stdio.h>

int main(){
    int a = 1;
    int x = 1;
    
    a = a / 10;

    if(a){
        a = a / 10;
        x = x + 1;
    }
    if(a){
        x = x + 1;
    }
    printf("x = %d\n",x);
}
