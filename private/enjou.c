#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SP 2525
#define ELEMENT 4

int main(void)
{
  int stats[ELEMENT] = {0};
  int i;
  int num;
  double score = 0;
  

  srand((unsigned)time(NULL));

  printf("どーん(%dCOMBO)\n", SP);

  for(i = 0;i < SP;i++){
    num = rand() % 1000;
    if(num < 830){
      stats[0]++;
      score += (double)(1000000.0 / SP * 1.01);
    }else if(num < 965){
      stats[1]++;
      score += (double)(1000000.0 / SP);
    }else if(num < 990){
      stats[2]++;
      score += (double)(1000000.0 / SP * 0.50);
    }else{
      stats[3]++;
    }
  }

  printf("score : %d\n", (int)score);
  for(i = 0;i < ELEMENT;i++){
    switch (i) {
      case 0:
        printf("J-CRITICAL: ");
      break;
      case 1:
        printf("JASTICE   : ");
      break;
      case 2:
        printf("ATTACK    : ");
      break;
      case 3:
        printf("MISS      : ");
      break;
    }
    printf("%d\n", stats[i]);
  }

  return 0;
}
