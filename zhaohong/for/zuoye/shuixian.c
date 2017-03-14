#include <stdio.h>

int main(){
    int i;
    int a,b,c;
    int s;
    for(i = 100;i < 1000;i++){
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        s = a * a * a + b * b * b + c * c * c;
        if(s == i){
            printf("%d  ",s);
        }
    }
    printf("\n");
}
