#include <stdio.h>

int main(void)
{
  char a, b, sum;

  a = (char)200;
  b = (char)100;

  sum = a + b;

  printf("a = %d, b = %d\n", a, b);

  printf("a + b = %d\n", sum);

  return 0;
}
