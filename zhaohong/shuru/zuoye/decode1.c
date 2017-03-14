#include <stdio.h>

int main(void){
    int s = 0;
    char c;
    c = getchar();
    while(c != EOF){
        if(s == 0){
            if(c == 'a'){
                s++;
            }
            else{
                printf("%c",c);
            }
        }
        else if(s == 1){
            if(c == 'b'){
                s++;
            }
            else if(c == 'a'){
                s = 0;
                printf("a");
                continue;
            }
            else{
                printf("a%c",c);
                s = 0;
            }
        }
        else if(s == 2){
            if(c == 'c'){
                s++;
            }
            else if(c == 'a'){
                s = 0;
                printf("ab");
                continue;
            }
            else{
                printf("ab%c",c);
                s = 0;
            }
        }
        else if(s == 3){
            if(c == 'a'){
                s++;
            }
            else{
                printf("abc%c",c);
                s = 0;
            }
        }
        else if(s == 4){
            if(c == 'b'){
                printf("*");
            }
            else if(c == 'a'){
                printf("abca");
                continue;
            }
            else{
                printf("abca%c",c);
            }
            s = 0;
        }
        else{
            printf("%c",c);
        }
        c = getchar();
    }
    return 0;
}
