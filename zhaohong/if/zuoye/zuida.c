#include <stdio.h>

int main(){
    int a = 35,b = 23,c = 55;
    if(a > b){
        if(a < c){
        printf("max = %d\n",c);
        }
        else{
        printf("max = %d\n",a);
        }
    }
    else{
        if(b < c){
        printf("max = %d\n",c);
        }
        else{
        printf("max = %d\n",b);
        }
    }
}
