#include <stdio.h>

int main(void){
  char a[100] = "hello";
  char *p;
  int i;
  p = a;
  for(i = 0;i < 5;i++){
    printf("%c\t",*p);
    printf("%p\n",p);
    p++;
  }
  return 0;
}
