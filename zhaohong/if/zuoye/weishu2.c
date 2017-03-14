#include <stdio.h>

int main(){
    int x = 6534;
    int a,b,c,d;
    if(x){
        a = x % 10;
        x = x / 10;
    }
    if(x){
        b = x % 10;
        x = x / 10;
    }
    if(x){
        c = x % 10;
        x = x / 10;
    }
    if(x){
        d = x % 10;
        x = x / 10;
    }
    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
}
