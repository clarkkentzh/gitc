#include <stdio.h>

int main(void){
    char a;
    a = getchar();
    while(a != EOF){
        if((97 <= a) && (a <= 122)){
            printf("%c",a - 32);
        }
    /*    else if(97 <= a <= 122){
            printf("%c",a - 32);
        }*/
        else{
            printf("%c",a);
        }
        a = getchar();
    }
    return 0;
}
