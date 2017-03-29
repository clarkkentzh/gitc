#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Books{
  int id;
  struct Books * next;
}linknode,* linklist;

typedef struct stack{
  linklist top;
  linklist bottom;
}stack,* pstack;

void InitStack(pstack p){
  p->top = malloc(sizeof(linknode));
  if(p == NULL){
    printf("error!");
  }
  p->bottom = p->top;
  p->top->next = NULL;
}

void TraverseStack(pstack p){
  linklist q = p->top;
  while(q != p->bottom){
    printf("%d\n",q->id);
    q = q->next;
  }
}

void Push(pstack p,int val){
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
  }
  q->id = val;
  q->next = p->top;
  p->top = q;
}

int Empty(pstack p){
  if(p->top == p->bottom){
    return 1;
  }
  else{
    return 0;
  }
}

int Pop(pstack p){
  linklist q = NULL;
  int a;
  if(Empty(p)){
    return -1;
  }
  else{
    a = p->top->id;
    q = p->top;
    p->top = p->top->next;
    free(q);
    return a;
  }
}

int Clear(pstack p){
  linklist q = NULL;
  while(p->top != p->bottom){
    q = p->top;
    p->top = p->top->next;
    free(q);
  }
}

int main(void){
  stack s;
  int a[5] = {6,4,3,2,1};
  int i;
  int repop;
  InitStack(&s);
  for(i = 0;i < 5;i++){
    Push(&s,a[i]);
  }
  TraverseStack(&s);
  printf("**************\n");
  repop = Pop(&s);
  TraverseStack(&s);
  printf("**************\n");
  Clear(&s);
  TraverseStack(&s);
  return 0;
}
