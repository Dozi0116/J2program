#include <stdio.h>

int main(void)
{
  unsigned char a, b, sum;

  a = (unsigned char)200;
  b = (unsigned char)100;

  sum = a + b;

  printf("a = %d, b = %d\n", a, b);

  printf("a + b = %d\n", sum);

  return 0;
}
