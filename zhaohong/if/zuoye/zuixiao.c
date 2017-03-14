#include <stdio.h>

int main(){
    int a = 35,b = 23,c = 55;
    if(a > b){
        if(b < c){
        printf("min = %d\n",b);
        }
        else{
        printf("min = %d\n",c);
        }
    }
    else{
        if(a < c){
        printf("min = %d\n",a);
        }
        else{
        printf("min = %d\n",c);
        }
    }
}
