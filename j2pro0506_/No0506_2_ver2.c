#include <stdio.h>

int main(void)
{
  int num, ans, i;

  printf("Prease enter the number.   =>");
  scanf("%d", &num);

  i = 0;
  while (num > 0){
    ans += num % 10;
    num /= 10;
  }

  printf("%d\n", ans);

  return 0;
}
