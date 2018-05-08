#include <stdio.h>
#include <math.h>

int main(void)
{
  double x;
  double y;

  printf("input=");
  scanf("%lf", &x);
  
  y = sqrt(x);
  printf("y=%f\n", y);

  
  x = 2*3.141592 * 45.0/360.0; // 45度のこと
  y = sin(x); // 入力はラジアンになるので注意すること
  printf("y=%f\n", y);

  return 0;
}
