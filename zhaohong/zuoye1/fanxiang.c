#include <stdio.h>

int main(){
    int a = 12349;
    int i;
    int x;
    
    printf("%d\n",a);

    for(i = 1;;i++){
        if(a){
            x = a % 10;
            a = a / 10;
            printf("%d",x);
        }
        else{
            break;
        }
    }
    printf("\n");
}
