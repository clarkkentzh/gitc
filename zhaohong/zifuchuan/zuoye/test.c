#include <stdio.h>

int main(void){
  char si[] = "hello";
  char a = *si;
  char *b = si;
  b++;
  a = *b;
  printf("%c\n", a);
}
