#include <stdio.h>

char zhuanhuan(){
    char d;
    while((d = getchar()) != EOF){
        if(d == 32){
            printf("%%20");
        }
        else{
            printf("%c",d);
        }
//        d = getchar();
    }
}
int main(void){
    zhuanhuan();
    return 0;
}
