#include <stdio.h>

int hikaku(int x, int y)
{
  int big;
  
  if (x<y) {
    // big = y;
    big = 0;
  }
  else {
    // big = x;
    big = 1;
  }
  
  return big;
}

int main(void)
{
  int a, b;
  int result;

  a = 10;
  b = 7;

  result = hikaku(a, b);
  printf("result=%d\n", result);

  return 0;
}
