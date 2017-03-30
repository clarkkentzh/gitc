#include <stdio.h>
#include <stdlib.h>
#include "lian.h"

int main(void){
  linklist p;
  p = link_create(0);
  int a[5] = {1,2,3,4,6};
  int i;
  for(i = 0;i < 5;i++){
    link_headin(p,a[i]);
  }
  printf("%p\n",p);

  link_show(p);
  printf("*****************\n");

  delete_list(p,3);
  link_show(p);
  printf("*****************\n");
  search_list(p,7);
  printf("*****************\n");
  link_show1(p);
  printf("*****************\n");

  insert(p,5,6);
  link_show(p);
  return 0;
}
