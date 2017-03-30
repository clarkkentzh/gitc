typedef struct Books{
  int data;
  struct Books * next;
}linknode,* linklist;

linklist create();
linklist push(linklist p,int val);
linklist show(linklist p);
int pop(linklist p);
