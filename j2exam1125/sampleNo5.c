#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void set_number(int array[]);
void disp_number(int array[]);

int main(void)
{
  int array[NUM];

  set_number(array);

  disp_number(array);

  return 0;
}

void set_number(int array[])
{
  int i;

  srand(1125);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%101;
  }

}

void disp_number(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("array[%2d] = %3d\n", i, array[i]);
  }

}
