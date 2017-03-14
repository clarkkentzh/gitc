#include <stdio.h>

int main(void){
    char s[3];
    char ch[8] = "abcdefgh";
    s[0] = 'a';
    s[1] = 'b';
    s[2] = 'c';
    int i;
    for(i = 0;i < 8;i++){
        putchar(s[i]);
    }
    printf("\n");
    printf("%s\n",ch);
    return 0;
}
