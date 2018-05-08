#include <stdio.h>

int calc_sum(int m, int n)
{
  int ans;

  ans = m + n;

  return ans;
}

int main(void)
{
  int a, b;
  int sum;

  a = 3;
  b = 7;

  sum = calc_sum(a, b);

  printf("%d + %d = %d\n", a, b, sum);

  return 0;
}
