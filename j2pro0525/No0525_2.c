#include <stdio.h>

int main(void)
{
  unsigned long int kitai;

  kitai += 200000000 * 2;
  kitai += 50000000 * 4;
  kitai += 100000 * 198;
  kitai += 100000000 * 1;
  kitai += 1000000 * 20;
  kitai += 500000 * 100;
  kitai += 10000 * 10000;
  kitai += 3000 * 100000;
  kitai += 300 * 1000000;

  kitai /= 10000000;

  printf("期待値 = %d円\n", kitai);

  return 0;
}
