#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  int data;
  struct node * next;
}linknode, *linklist;

/*linklist link_create(){
  linknode * p;
  p = malloc(sizeof(struct node));
  if(p == NULL){
    printf("error!");
    return 0;
  }
  p->next = NULL;
  return p;
}*/

int main(){
  struct node * head = NULL;
  head = malloc(sizeof(struct node));
  struct node * two = NULL;
  two = malloc(sizeof(struct node));
  if(head == NULL || two == NULL){
    printf("error!");
    return 0;
  }
  head->data = 10;
  head->next = NULL;
  two->data = 20;
  two->next = head;
  printf("first = %d,two = %d\n",head->data,two->data);
  printf("two = %p\n",two->next);
  printf("%p\n",head->next);

  free(head);
  return 0;
}
