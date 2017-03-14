#include <stdio.h>

int main(void){
    int i;
    int a,b,c,d,e;
    for(i = 10000;i <= 99999;i++){
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        d = i / 1000 % 10;
        e = i / 10000;
        if((a == e) && (b == d)){
            printf("%d\t",i);
        }
    }
}
