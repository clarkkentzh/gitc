#include <stdio.h>

int main(void){
    char c;
    c = getchar();
    while(c != EOF){

        if((c >= 65) && (c <= 90)){
            printf("%c",c + 32);
        }
        else if((c >= 97) && (c <= 122)){
            printf("%c",c - 32);
        }     
        else{  
            printf("%c",c);
        }
        c = getchar();
    }
    return 0;
}
