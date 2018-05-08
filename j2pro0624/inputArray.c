#include <stdio.h>

#define NUM 5

int main(void)
{
  int i;
  int vx[NUM];

  for (i=0; i<NUM; i++) {
    printf("vx[%d]:", i);
    scanf("%d", &vx[i]);
  }
  
  for (i=0; i<NUM; i++) {
    printf("vx[%d]=%d\n", i, vx[i]);
  }

  return 0;
}
