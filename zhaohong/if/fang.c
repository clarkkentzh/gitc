#include <stdio.h>
#include <math.h>

int main(){
    int a = 3, b = 5, c = 1;
    int d = b * b - (4 * a * c);
    double x1,x2;
    printf("d = %d\n", d);
    if(d > 0){
        x1 = (-b + sqrt(d)) * 1.0/(2 * a);
        x2 = (-b - sqrt(d)) * 1.0/(2 * a);
        printf("x1 = %f,x2 = %f\n",x1,x2);
    }
    else if(d == 0){
        x1 = x2 = -b * 1.0/(2 * a);  
        printf("x1 = %f\n",x1);
    }
    else{
        printf("no result!\n");
    }
}

