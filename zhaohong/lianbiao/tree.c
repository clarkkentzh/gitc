#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
  char data;
  struct node * left;
  struct node * right;
}bitree;

bitree * traver(bitree * t){
  if(t){
    traver(t->left);
    printf("%d ",t->data);
    traver(t->right);
  }
}

int main(int argc, char const *argv[]) {
  bitree * a,* b,* c,* d,* e,* f,* g;
  a = malloc(sizeof(bitree));
  b = malloc(sizeof(bitree));
  c = malloc(sizeof(bitree));
  d = malloc(sizeof(bitree));
  e = malloc(sizeof(bitree));
  f = malloc(sizeof(bitree));
  g = malloc(sizeof(bitree));

  a->data = 7;
  a->left = b;
  b->data = 2;
  b->left = c;
  c->data = 1;
  b->right = d;
  d->data = 5;
  d->left = e;
  e->data = 3;
  d->right = f;
  f->data = 6;
  e->right = g;
  g->data = 4;

  traver(a);

  return 0;
}
