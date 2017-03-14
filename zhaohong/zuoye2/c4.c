#include <stdio.h>

int main(void){
  int i,j;
  float n,d,v;

  printf("Enter share price(must include a fraction):");
  scanf("%d%f/%f",&i,&n,&d);
  printf("Enter number of shares:");
  scanf("%d",&j);

  v = (i + n / d) * j;

  printf("value of holdings: $%.2f\n",v);
  return 0;
}
