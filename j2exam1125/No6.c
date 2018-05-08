#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SP 100
#define ELEMENT 6

int main(void)
{
  int stats[ELEMENT] = {0};
  int i;
  int num;

  srand(1125);

  for(i = 0;i < SP;i++){
    num = rand() % ELEMENT;
    stats[num]++;
  }

  for(i = 0;i < ELEMENT;i++){
    switch (i) {
      case 0:
        printf("HP          : ");
      break;
      case 1:
        printf("MP          : ");
      break;
      case 2:
        printf("Attack      : ");
      break;
      case 3:
        printf("Defence     : ");
      break;
      case 4:
        printf("Agirity     : ");
      break;
      case 5:
        printf("Intelligence: ");
      break;
    }
    printf("%2d\n", stats[i]);
  }

  return 0;
}
