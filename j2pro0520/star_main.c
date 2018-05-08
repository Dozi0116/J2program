#include <stdio.h>

void star(int num);

int main(void)
{
  int num;

  printf("num=");
  scanf("%d", &num);

  star(num);

  return 0;
}
