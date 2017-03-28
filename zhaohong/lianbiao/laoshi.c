#include <stdio.h>
#include <stdlib.h>

struct Books{
  int book_id;
  struct Books * next;
};

/*int insert(struct Books * head,int val){
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
}*/

int insert_1(struct Books * p,int val,int n){
  struct Books * q;
  q = malloc(sizeof(struct Books));
  if(q == NULL){
    printf("error");
    return -1;
  }                                //不能在头结点插入结点
  q->book_id = val;
  q->next = NULL;
  while((p->book_id) != n){
    p = p->next;
  }
  q->next = p->next;
  p->next = q;
}

struct Books * delete(struct Books * p,int n){
  struct Books * q = NULL;

  while(NULL != p && p->book_id != n){
      q = p;
      p = p->next;
  }
  if(NULL != p){
    q->next = p->next;
    free(p);
  }
  return p;
}
struct Books * search(struct Books * p,int m){
  while(p != NULL && p->book_id != m){
    p = p->next;
  }
  printf("%d   %p\n",p->book_id,p);
}

void show(struct Books * p){
  while(p != NULL){
    printf("id = %d,ip = %p\n",p->book_id,p);
    p = p->next;
  }
}

int main(void){
  struct Books * p = NULL;
  struct Books head;

  p = &head;
  head.book_id = 100;
  head.next = NULL;
  insert_1(&head,101,100);
  insert_1(&head,102,101);     //头结点删除这部分都会出现问题
  insert_1(&head,103,102);
  insert_1(&head,104,103);
  insert_1(&head,105,104);
  insert_1(&head,106,105);
  insert_1(&head,107,106);

  show(&head);
  delete(&head,102);
  printf("=====================\n");
  show(&head);
  printf("*********************\n");
  search(&head,105);
  return 0;
}
