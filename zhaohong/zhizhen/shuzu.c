#include <stdio.h>

/*int main(void){
  char str[64] = "helloworld!";
  int *s = str;
  while(*s != '\0'){
    printf("%c",*s);
    s++;                             //int每次读四个字符距离。
  }
  return 0;
}*/
int main(void){
  char str[64] = "helloworld!";
  char *s = str;
  while(*s != '\0'){
    printf("%c",*s);
    s++;
  }
  return 0;
}
