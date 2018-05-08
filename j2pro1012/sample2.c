#include <stdio.h>

int main(void)
{
  int a, b;
  int *px, *py;

  px = &a;
  *px = 80;
  b = 60;
  py = &a;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  
  *py = 70;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  
  a = 10;
  b = 20;
  *px = 30;
  *py = 40;
  printf("a=%d, b=%d *px=%d, *py=%d\n", a, b, *px, *py);

  return 0;
}
