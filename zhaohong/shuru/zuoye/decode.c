#include <stdio.h>

int main(void){
    char c;
    int s = 0;
    c = getchar();
    while(c != EOF){
        if(s == 0){
            if(c == '%'){
                s++;
            }
            else{
                printf("%c",c);
            }
        }
        else if(s == 1){
            if(c == '1'){
                s++; 
            }
            else{
                printf("%%%c",c);
                s = 0;
            }
        }
        else if(s == 2){
            if(c == '2'){
                s++;
            }
            else{
                printf("%%1%c",c);
                s = 0;
            }
        }
        else if(s == 3){
            if(c == '3'){
                s++;
            }
            else{
                printf("%%12%c",c);
                s = 0;
            }
        }
        else if(s == 4){
            if(c == '4'){
                printf(" * ");
            }
            else{
                printf("%%123%c",c);
            }
            s = 0;
        }
        c = getchar();
    }
    return 0;
}
