#include <stdio.h>

void zhuanhuan(){
  char a = getchar();
  int s = 0;
  while(a != EOF){

      if(s == 0){
        if(a == '%'){
          s++;
        }
        else if(a == 32){
          printf("%%20");
        }
        else{
          printf("%c",a);
        }
      }
      else if(s == 1){
        if(a == '2'){
          s++;
        }
        else if(a == 32){
          printf("%%%%20");
          s = 0;
        }
        else{
          printf("%%%c",a);
          s = 0;
        }
      }
      else if(s == 2){
        if(a == '0'){
          printf(" ");
        }
        else if(a == 32){
          printf("%%2%%20");
        }
        else{
          printf("%%2%c",a);
        }
        s = 0;
      }
        a = getchar();
  }
}


int main(void){
  zhuanhuan();
  return 0;
}
