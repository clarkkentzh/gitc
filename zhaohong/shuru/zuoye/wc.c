#include <stdio.h>
#include <ctype.h>

int main(void){
    int h = 0;
    int f = 0;
    int s = 0;
    char c;
    char t = ' ';
    c = getchar();
    while(c != EOF){
        f += 1;
        if(c == 10){
            h += 1;
        }
        if(!isspace(c) && isspace(t)){
            s += 1;
        }
        t = c;
        c = getchar();
    }
    printf("hangs = %d\tchars = %d\twords = %d\n",h,f,s);
    return 0;
}
