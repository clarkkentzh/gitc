#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node * next;
}linknode,*linklist;

int main(){
  struct node * head = NULL;
  head = malloc(sizeof(struct node));
  if(head == NULL){
    printf("error!");
    return 0;
  }
  head->data = 10;
  head->next = NULL;

  printf("%d\n",head->data);
  return 0;
}
