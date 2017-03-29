#include <stdio.h>
#include <stdlib.h>

typedef int datatype;//单纯的一个定义类型，datatype就相当于int
typedef struct node{
  datatype data;
  struct node * next;
  struct node * prev;
}linknode,*linklist;

linklist link_create(int val){
  linklist p;
  p = malloc(sizeof(linknode));
  if(p == NULL){
    printf("error!");
    return 0;
  }
  p->data = val;
  p->next = p;
  p->prev = p;
  return p;                      //创建链表
}

int link_headin(linklist p,datatype val){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
    return 0;
  }
  q->data = val;
  p->next->prev = q;
  q->next = p->next;
  q->prev = p;
  p->next = q;
  return 1;                  //头插法插入结点
}

int insert(linklist p,datatype val,int n){
  linklist q;
  linklist k;
  k = malloc(sizeof(linknode));
  if(k == NULL){
    printf("error");
    return 0;
  }
  q = p->next;
  while(q != p && q->data != n){
    q = q->next;
  }
  if(q->data != n){
    printf("未搜索到位置%d！",n);
  }
  else{
    k->data = val;
    q->next->prev = k;
    k->next = q->next;            //判断是否在头结点前后，将头结点位置赋值
    q->next = k;
    k->prev = q;
  }
}

int search_list(linklist p,int n){
  linklist q = p->next;
  while(q != p && q->data != n){
    q = q->next;
  }
  if(q == p){
    printf("未搜索到数据！\n");
  }
  else{
  printf("搜索data = %d,ip = %p\n",p->data,p);
  }                         //搜索链表，成功则返回含有n的结点的指针
}

linklist delete_list(linklist p,int n){
  linklist q,k = NULL;
  q = p->next;
  while(q != p && q->data != n){
    k = q;
    q = q->next;
  }
  if(q == p){
    return p;           //没有找到要删除的数
  }
  else if(k == NULL){
    q->next->prev = p;
    p->next = q->next;
  }
  else{
    q->next->prev = q->prev;
    q->prev->next = q->next;
  }
  printf("删除data = %d\n",q->data);
}                              //删除结点

void link_show(linklist p){
  linklist q;
  q = p->next;
  while(q != p){
    printf("%d  self ip = %p  next ip = %p  prev ip = %p\n",q->data,q,q->next,q->prev);
    q = q->next;
  }
}
void link_show1(linklist p){
  printf("反向显示！\n");
  linklist q;
  q = p->prev;
  while(q != p){
    printf("%d  self ip = %p  next ip = %p  prev ip = %p\n",q->data,q,q->prev,q->next);
    q = q->prev;
  }
}


int main(void){
  linklist p;
  p = link_create(0);
  int a[5] = {1,2,3,4,6};
  int i;
  for(i = 0;i < 5;i++){
    link_headin(p,a[i]);
  }
  printf("%p\n",p);

  link_show(p);
  printf("*****************\n");
/*
  delete_list(p,3);
  link_show(p);
  printf("*****************\n");
  search_list(p,7);
  printf("*****************\n");
  link_show1(p);
  printf("*****************\n");
*/
  insert(p,5,6);
  link_show(p);
  return 0;
}
