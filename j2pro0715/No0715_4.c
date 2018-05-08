#include <stdio.h>

int main(void)
{
  char barcord[100];
  int bp;

  printf("Please scaning the barcord.");
  scanf("%s", barcord);

  bp = calcBattlePoint(barcord);

  printf("Battlepoint ... %d !!\n", bp);

  return 0;
}
