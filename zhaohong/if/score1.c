#include <stdio.h>

int main(){
    int s = 98;
    if(s >= 90)
    {printf("A\n");
    }
    if(s >= 70 && s < 90)
    {printf("B\n");
    }
    if(s >= 60 && s < 70)
    {printf("C\n");
    }
    if(s < 60)
    {printf("D\n");
    }
    return 0;
}
