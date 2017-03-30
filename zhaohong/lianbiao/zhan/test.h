typedef struct Books{
  int id;
  struct Books * next;
}linknode,* linklist;

typedef struct stack{
  linklist top;
  linklist bottom;
}stack,* pstack;

void InitStack(pstack p);
void TraverseStack(pstack p);
void Push(pstack p,int val);
int Pop(pstack p);
int Clear(pstack p);
