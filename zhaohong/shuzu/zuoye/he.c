#include <stdio.h>

int main(void){
    int a[5] = {2,3,4,8,6};
    int i;
    int s = 0;
    for(i = 0;i < 5;i++){
        s += a[i];
    }
    printf("s = %d\n",s);
    return 0;
}
