#include <stdio.h>
#include <string.h>
int mystrcmp(char * si, char * sl){

  int i = 0;
  int a ;
  while(sl[i] != '\0'){
    if(si[i] != sl[i]){
      a = si[i] - sl[i];
      return a;
      break;
    }
    i++;
  }
    return si[i] - sl[i];
}
int main(int argc,const char * argv[]){
  char si[128] = "hello";
  char sl[128] = "helloa";
  int a = mystrcmp(si,sl);
  printf("%d\n",a);

  return 0;
}
