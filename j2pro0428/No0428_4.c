#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int rnd;
  int i;
  int min, max;

  do{
    printf("min => ");
    scanf("%d", &min);
    printf("max => ");
    scanf("%d", &max);
  }while(min > max);
  
  printf("%d ~ %dまでの乱数\n", min, max);

  for(i = 0;i < 100;i++){
    rnd = rand() % (max - min + 1) + min;
    printf("%d\n", rnd);
  }

  return 0;
}
