#include <stdio.h>

int main(void)
{
  int a, b;
  int *px, *py;

  a = 100;
  b = 200;
  px = &a;
  py = px;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  
  *px = 300;
  py = &b;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  
  *py = 400;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  return 0;
}
