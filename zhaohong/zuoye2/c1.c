#include <stdio.h>

/*#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)
*/
int main(void){
  float f1 = 32.0;
  float f2 = 5.0 / 9.0;
  float f,c;
  printf("Enter Fahrenheit temperature:");
  scanf("%f",&f);
  c = (f - f1) * f2;
  printf("C equivalent: %.1f\n",c);
  return 0;
}
