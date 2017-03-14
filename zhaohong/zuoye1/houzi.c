#include <stdio.h>

int main(){
    int t = 1;
    int d;
    for(d = 1;d < 10;d++){
        t = (t + 1) * 2;
    }
    printf("t = %d\n",t);
}
