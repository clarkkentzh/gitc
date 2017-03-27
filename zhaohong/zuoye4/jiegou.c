#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books{
  char title[50];
  int book_id;
};

int main(void){

  struct books book1 = {"zhaohong",1111};

  struct books book2;
  book2.book_id = 2222;
  strcpy(book2.title,"lina");

  printf("%d  ",book1.book_id);
  printf("%s\n",book1.title);
  printf("%d  ",book2.book_id);
  printf("%s\n",book2.title);
  printf("%ld\n",sizeof(book1));
  return 0;
}
