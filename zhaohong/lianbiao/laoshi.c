#include <stdio.h>
#include <stdlib.h>

struct Books{
  int book_id;
  struct Books * next;
};

int insert(struct Books * head,int val){
  struct Books * p;
  p = malloc(sizeof(struct Books));
  if(p == NULL){
    printf("error");
    return -1;
  }
  p->book_id = val;
  p->next = NULL;

  while((head->next) != NULL){
    head = head->next;         //循环找到最后一个结点
  }
  head->next = p;              //这是最后一个结点，然后指向p
}

struct Books * delete(struct Books * p,int n){
  struct Books * q = NULL;
  struct Books * k = NULL;
  k = p;
  if(p->book_id == n){
    p = k->next;
    free(k);
  }
  else{
    while(NULL != k && k->book_id != n){
      q = k;
      k = k->next;
    }
    if(NULL != k){
    q->next = k->next;
    free(k);
    }
  }
  return p;
}

void show(struct Books * p){
  while(p != NULL){
    printf("head.book_id = %d\n",p->book_id);
    p = p->next;
  }
}

int main(void){
  struct Books * p;
  struct Books head;

  p = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(&head,101);
  insert(&head,102);
  insert(&head,103);
  insert(&head,104);
  insert(&head,105);
  insert(&head,106);

  show(&head);
  delete(&head,100);
  printf("=====================\n");
  show(&head);
  return 0;
}
