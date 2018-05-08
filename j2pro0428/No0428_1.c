#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int rnd;
  int i;

  printf("0 ~ %dまでの乱数\n", RAND_MAX);

  for(i = 0;i < 100;i++){
    rnd = rand();
    printf("%d\n", rnd);
  }

  return 0;
}

  
