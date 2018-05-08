#include <stdio.h>
#include <stdlib.h>

#define NUM 3
#define NUM_MAX 10000

int main(void)
{
  int *pt;
  int i;

  pt = (int *)malloc(sizeof(int)*3);
  
  for (i=0; i<NUM_MAX; i++) {
    //printf("array[%d]=", i);
    //scanf("%d", &pt[i]);
    pt[i] = i;
  }
  
  for (i=0; i<NUM_MAX; i++) {
    printf("[%d]=%d\n", i, pt[i]);
  }

  return 0;
}

