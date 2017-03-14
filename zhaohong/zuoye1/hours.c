#include <stdio.h>

int main(){
    int h = 12,n = 59;
    if((h - 12) > 0){
        printf("%02d:%d PM\n",h - 12,n);
    }
    else if((h - 12) < 0){
    printf("%02d:%d AM\n",h,n);
    }
    else{
    printf("%d:%d AM\n",12,n);
    }

}
