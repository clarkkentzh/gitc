#include <stdio.h>

int main(){

    int i;
    long  int a = 6465626545455454556;
    int x = 1;
    a = a / 10;
    for(i = 0;;i++){
        if(a){
            a = a / 10;
            x = x + 1;
        }
        else{
            break;
        }
    }
    printf("x = %d\n",x);
}   













/* if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }
   if(a){
   a = a / 10;
   x = x + 1;
   }    
   printf("x = %d\n",x);
   }*/
