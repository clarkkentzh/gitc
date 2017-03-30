#include <stdio.h>
#include <stdlib.h>
#include "duilie.h"

linklist create(){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
  }
  q->data = 0;
  q->next = NULL;
  return q;
}

linklist push(linklist p,int val){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
  }
  q->data = val;
  q->next = p->next;
  p->next = q;
}

linklist show(linklist p){
  linklist q;
  q = p->next;
  while(q != NULL){
    printf("%d\n",q->data);
    q = q->next;
  }
}

int pop(linklist p){
  if(p->next == NULL){
    printf("stack is kongde!");
    return -1;
  }
  int num;
  linklist q = p->next;
  num = q->data;
  p->next = q->next;
  free(q);
  return num;
}
