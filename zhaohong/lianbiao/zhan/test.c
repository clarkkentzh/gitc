#include <stdio.h>
#include <stdlib.h>

typedef struct Books{
  int id;
  struct Books * next;
}linknode,* linklist;

typedef struct stack{
  linklist top;
  linklist bottom;
}stack,* pstack;

void InitStack(pstack p){               //创建一个空栈
  p->top = malloc(sizeof(linknode));
  if(p == NULL){
    printf("error!");
  }
  p->bottom = p->top;                     //栈顶等于栈底就是空栈
  p->top->next = NULL;
}

void TraverseStack(pstack p){           //遍历
  linklist q = p->top;
  while(q != p->bottom){
    printf("%d\n",q->id);
    q = q->next;
  }
}

void Push(pstack p,int val){            //压栈操作
  linklist q;
  q = malloc(sizeof(linknode));
  if(q == NULL){
    printf("error!");
  }
  q->id = val;
  q->next = p->top;              //这三句给q赋值然后让q指向栈顶，最后又把q变为栈顶
  p->top = q;
}

int Pop(pstack p){
  linklist q = NULL;
  int a;
  if(p->top == p->bottom){
    return -1;
  }
  else{
    q = p->top;
    p->top = p->top->next;
    free(q);
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
