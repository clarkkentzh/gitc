#include <stdio.h>
#include <stdlib.h>

typedef struct Qnode{
  int data;
  struct Books * next;
}linknode,* linklist;

typedef struct {
  linklist front;
  linklist rear;
}queue;

int create(queue * q){
  q->front = q->rear =(linklist)malloc(sizeof(linknode));
  if(q->front == NULL){
    printf("error!");
    return -1;
  }
  q->front->next = NULL;
  return 0;
}

int initqueue(queue * q,int val){
  linklist p;
  p = (linklist)malloc(sizeof(linknode));
  if(p == NULL){
    printf("error!");
    return -1;
  }
  p->data = val;
  p->next = NULL;
  q->rear->next = p;
  q->rear = p;
}

linklist showqueue(queue * q){
  linklist p = q->front->next;
  while(p != NULL){
    printf("%d\n",p->data);
    p = p->next;
  }
}

int main(void){
  queue h;
  create(&h);
  int i,a[5] = {6,4,3,2,1};
  for(i = 0;i < 5;i++){
    initqueue(&h,a[i]);
  }
  showqueue(&h);
  return 0;
}
