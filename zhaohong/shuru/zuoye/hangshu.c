#include <stdio.h>

int main(void){
    char c;
    int s;
    c = getchar();
    while(c != EOF){
        if(c == 10){
            s += 1;
        }
        c = getchar();
    }
    printf("%d\n",s);
    return 0;
}
