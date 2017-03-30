#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int main(void){
  stack s;
  int a[5] = {6,4,3,2,1};
  int i;
  InitStack(&s);
  for(i = 0;i < 5;i++){
    Push(&s,a[i]);
  }
  TraverseStack(&s);
  printf("**************\n");
  Pop(&s);
  TraverseStack(&s);
  printf("**************\n");
  Clear(&s);
  TraverseStack(&s);
  return 0;
}
