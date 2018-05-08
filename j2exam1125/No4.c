#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int element;
  double *pt;

  printf("要素数を入力してください。 => ");
  scanf("%d", &element);

  pt = (double *)malloc(sizeof(double) * element);

  free(pt);

  return 0;
}
