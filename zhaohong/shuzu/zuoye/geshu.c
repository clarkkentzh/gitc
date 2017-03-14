#include <stdio.h>

int main(void){
  char c;
  int i = 0,j = 0;
  c = getchar();
  while(c != EOF){
    if(((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122))){
      i += 1;
    }
    else if((c >= 48) && (c <= 57)){
      j += 1;
    }
    c = getchar();
  }
  printf("zimu = %d\nshuzi = %d\n",i,j);
  return 0;
}
