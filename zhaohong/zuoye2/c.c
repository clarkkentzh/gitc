#include <stdio.h>

int main(void){
  int height, length, width, volum ,weight;
  printf("Enter height:");
  scanf("%d",&height);
  printf("Enter length:");
  scanf("%d",&length);
  printf("Enter width:");
  scanf("%d",&width);
  volum = height * length * width;
  weight = (volum + 165) / 166;
  printf("volum : %d\n",volum);
  printf("weight: %d\n",weight);
  return 0;
}
