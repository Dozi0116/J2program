#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int val;
  int seed;

  printf("seed=");
  scanf("%d", &seed);

  srand(seed);

  //srand(123);

  i = 0;
  while (i < 10) {
    val = rand();
    printf("%d\n", val);
    i++;
  }

  return 0;
}
    
