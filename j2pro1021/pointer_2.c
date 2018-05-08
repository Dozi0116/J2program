#include <stdio.h>

int bar(int x, int *y)
{
  int a;

  a = 3;
  *y = x * a;

  return a;
}

void func(int *s, int t, int u)
{
  *s = *s + 10;
  t  = (*s)*2;
  printf("%d, %d\n", *s, t);

  u = bar(*s, &t);

  printf("%d, %d, %d\n", *s, t, u);
}

int main(void)
{
  int a, b, c;
  int *px, *py;

  px = &a;
  a = 7;
  c = bar(a, &b);
  py = px;
  printf("%d, %d, %d, %d, %d\n", a, b, c, *px, *py);

  func(&b, a, b);

  printf("%d, %d, %d, %d, %d\n", a, b, c, *px, *py);

  return 0;
}
