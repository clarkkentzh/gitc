#include <stdio.h>
#include <stdlib.h>

typedef struct Books{
  int book_id;
  struct Books * next;
  struct Books * prev;
}linknode,* linklist;

linklist insert(linklist p,int val,int n){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
  }
  while(p->book_id != n){
    p = p->next;
  }
  q->book_id = val;
  q->prev = p;
  if(p->next == NULL){
    q->next = NULL;
    p->next = q;
  }
  else{
    q->next = p->next;
    p->next->prev = q;
    p->next = q;
  }
}

linklist delete(linklist p,int n){
  linklist q;
  while(p != NULL && p->book_id != n){
    q = p;
    p = p->next;
  }
  if(p != NULL){
    q->next = p->next;
    p->next->prev = q;
    free(p);
  }
}

int show(linklist p){
  while(p != NULL){
    printf("id = %d   本身 ip= %p    next ip= %p      prev ip= %p\n",p->book_id,p,p->next,p->prev);
    p = p->next;
  }
}

int search(linklist p,int n){
  while(p != NULL && p->book_id != n){
    p = p->next;
  }
  printf("id = %d  ip = %p\n",p->book_id,p);
}

int main(void){
  linknode head;
  head.book_id = 100;
  head.prev = NULL;
  head.next = NULL;
  insert(&head,101,100);
  insert(&head,102,101);
  insert(&head,104,102);
  insert(&head,103,102);
  insert(&head,105,104);

  show(&head);
  delete(&head,104);
  printf("==========================\n");
  show(&head);
  printf("**************************\n");
  search(&head,105);

}
