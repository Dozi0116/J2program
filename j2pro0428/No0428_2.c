#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int rnd;
  int i;

  puts("0 ~ 5までの乱数");

  for(i = 0;i < 20;i++){
    rnd = rand() % 6;
    printf("%d\n", rnd);
  }

  return 0;
}
