#include <stdio.h>
#include <stdlib.h>

#define NUM 3
#define NUM_MAX 10

int main(void)
{
  int *pt;
  int i;

  pt = (int *)malloc(sizeof(int)*NUM);
  
  for (i=0; i<NUM_MAX; i++) {
    pt[i] = i;
  }
  
  for (i=0; i<NUM_MAX; i++) {
    printf("[%d]=%d\n", i, pt[i]);
  }

  return 0;
}

