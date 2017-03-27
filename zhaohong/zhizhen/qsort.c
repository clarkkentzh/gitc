#include <stdio.h>
#include <stdlib.h>


int compare(const void * a,const void * b){

    return (*(int *)a) - (*(int *)b);
  }

int main(void){

  int i;
  int a[5] = {2,10,1,5,3};

  qsort(a,5,sizeof(int),compare);

  for(i = 0;i < 5;i++){
    printf("%d  ",a[i]);
  }
  printf("\n");
  return 0;
}
