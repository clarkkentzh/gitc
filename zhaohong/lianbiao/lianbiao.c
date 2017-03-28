#include <stdio.h>
#include <stdlib.h>

typedef int datatype;//单纯的一个定义类型，datatype就相当于int
typedef struct node{
  datatype data;
  struct node * next;
}linknode,*linklist;

linklist link_create(){
  linklist p;
  p = malloc(sizeof(linknode));
  if(p == NULL){
    printf("error!");
    return 0;
  }
  p->next = NULL;
  return p;                      //创建链表
}

int link_headin(linklist p,datatype value){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
    return 0;
  }
  q->data = value;
  q->next = NULL;
  q->next = p->next;
  p->next = q;
  return 1;                  //插入结点
}

int search_list(linklist p,int n){
  while(p != NULL && p->data != n){
    p = p->next;
  }
  printf("%p\n",p);         //搜索链表，成功则返回含有n的结点的指针
}

linklist delete_list(linklist p,int n){
  linklist q,k;
  for(k = p,q = NULL;k != NULL && k->data != n;q = k,k = k->next){
  }
  if(k == NULL){
    return p;
  }
  else if(q == NULL){
    p = p->next;
  }
  else{
    q->next = k->next;
  }
  free(k);
  return p;
}                               //删除结点

void link_show(linklist p){
  linklist q;
  q = p->next;
  while(q != NULL){
    printf("%d  %p\n",q->data,q) ;
    q = q->next;
  }
  putchar(10);              //显示
}

int main(void){
  linklist p;

  if((p = link_create()) == NULL){
    printf("error!");
    return 0;
  }
  int i,a[5] = {6,4,3,2,1};
  for(i = 0;i < 5;i++){
    if(link_headin(p,a[i]) == 0){
      return 0;
    }
  }
  link_show(p);
  delete_list(p,1);
  link_show(p);
  search_list(p,4);
  return 0;
}
