#include <stdio.h>
#include <stdlib.h>
#include "duilie.h"

int main(void){
  linklist p;
  p = create();
  int i, a[5] = {6,4,3,2,1};
  for(i = 0;i < 5;i++){
    push(p,a[i]);
  }
  show(p);
  printf("删除了%d\n",pop(p));
  show(p);
  return 0;
}
