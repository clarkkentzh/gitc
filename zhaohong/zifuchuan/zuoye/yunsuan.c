#include <stdio.h>
#include <string.h>

int add(int i,int j){
  int s;
  s = i + j;
  return s;
}
int jian(int i,int j){
  int s;
  s = i - j;
  return s;
}
int chang(int i,int j){
  int s;
  s = i * j;
  return s;
}
int chu(int i,int j){
  int s;
  s = i / j;
  return s;
}
int yu(int i,int j){
  int s;
  s = i % j;
  return s;
}
int main(int argc,const char * argv[]){
  int l = 10,k = 5;
  int a;
  if(*argv[1] == '+'){
    a = add(l,k);
  }
  else if(*argv[1] == '-'){
    a = jian(l,k);
  }
  else if(*argv[1] == '*'){
    a = chang(l,k);
  }
  else if(*argv[1] == '/'){
    a = chu(l,k);
  }
  else if(*argv[1] == '%'){
    a = yu(l,k);
  }
  printf("%d\n",a);
  return 0;
}
