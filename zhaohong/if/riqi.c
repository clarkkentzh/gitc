#include <stdio.h>

int main(){
    int year = 2016,month = 12,day = 31;
    int l = 0;
    int s = 0;
    if(((year % 4 == 0 ) && (year % 100 != 0)) || (year % 400 == 0))
    {printf("it is ruinian!\n");
        l = 1;
    }
    else{
        printf("zhe shi ping nian!\n");
    }
    if(month == 1) {
        s = day;
        printf("s = %d\n",s);
    }
    else if(month == 2){
        s = 31 + l + day;
        printf("s = %d\n",s);
    }
    else if(month == 3){
        s = 31 + l + 28 + day;
        printf("s = %d\n",s);
    }
    else if(month == 4){
        s = 31 + l + 28 + 31 + day;
        printf("s = %d\n",s);
    }
    else if(month == 5){
        s = 31 + l + 28 + 31 + 30 + day;
        printf("s = %d\n",s);
    }
    else if(month == 6){
        s = 31 + l + 28 + 31 + 30 + 31 + day;
        printf("s = %d\n",s);
    }
    else if(month == 7){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + day;
        printf("s = %d\n",s);
    }
    else if(month == 8){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + 31 + day;
        printf("s = %d\n",s);
    }
    else if(month == 9){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
        printf("s = %d\n",s);
    }
    else if(month == 10){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        printf("s = %d\n",s);
    }
    else if(month == 11){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        printf("s = %d\n",s);
    }
    else if(month == 12){
        s = 31 + l + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        printf("s = %d\n",s);
    }
}
