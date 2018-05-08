#include <stdio.h>

int main(void)
{
  int i, sum = 0;

  for(i = 123;i <= 456;i++){
    sum += i;
  }

  printf("%d\n", sum);

  return 0;
}
