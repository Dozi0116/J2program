#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int rnd;

  printf("さいころの目は...\n");

  rnd = rand() % 6 + 1;
  printf("%d\n", rnd);

  return 0;
}
