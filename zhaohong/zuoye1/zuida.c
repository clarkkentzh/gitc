#include <stdio.h>

int main(void){
    int a = 10,b = 20,c = 15;
    if(a > b){
        if(a > c){
            printf("max = %d\n",a);
        }
        else{
            printf("max = %d\n",c);
        
        }
    }
    else{
        if(b > c){
            printf("max = %d\n",b);
        }
        else{
            printf("max = %d\n",c);
        }
    }
    return 0;
}
