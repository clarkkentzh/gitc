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
  k = p;                                    //头结点不能删除
  while(NULL != k && k->book_id != n){
      q = k;
      k = k->next;
  }
  if(NULL != k){
    q->next = k->next;
    free(k);
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
  struct Books * p;
  struct Books head;

  p = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(p,101);
  insert(p,102);     //头结点删除这部分都会出现问题
  insert(p,103);
  insert(p,104);
  insert(p,105);
  insert(p,106);

  show(p);
  delete(p,102);
  printf("=====================\n");
  show(p);
  printf("*********************\n");
  search(p,105);
  return 0;
}
