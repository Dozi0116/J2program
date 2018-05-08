#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  long int i;
  int rnd;
  long int keep[7] = {0};
  clock_t spend1, spend2;

  spend1 = clock();

  srand((unsigned)time(NULL));
  
  for(i = 0;i < 6000000;i++){
    
    rnd = rand() % 7 + 1;
    if(rnd == 7) rnd = 2;
    keep[rnd]++;
    printf("%d\n", rnd);  
  }
    for(i = 1;i < 7;i++){
      printf("[%d] = %d  %lf%%\n", i, keep[i], (double)(keep[i]) / (double)60000);
    }
    
    spend2 = clock();
    printf("%d, %d, %d\n", spend2 - spend1, spend2, spend1);
    
    return 0;
}
