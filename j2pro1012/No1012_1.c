#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 50000
#define MAX 10000
#define MIN -10000

void set_array(int array[])
{
  srand((unsigned)time(NULL));
  int i;
  for(i = 0;i < ELEMENT;i++){
    array[i] = rand() % 20001 - 10000;
  }
}

void calc_MaxMinAve(int array[], int *max, int *min, double *ave)
{
  int i, sum = 0, cnt = 0;
  for(i = 0;i < ELEMENT;i++){
    if(*max < array[i]){
      *max = array[i];
    }
    if(*min > array[i]){
      *min = array[i];
    }
    sum += array[i];
    cnt++;
  }
  *ave = (double)sum / cnt;
}

int main(void)
{
  int max = MIN, min = MAX;
  double ave;
  int array[ELEMENT];

  set_array(array);

  calc_MaxMinAve(array, &max, &min, &ave);

  int i;
  for(i = 0;i < ELEMENT;i++){
    printf("array[%d] = %d\n", i, array[i]);
  }

  printf("max => %d\nmin => %d\nave => %f\n", max, min, ave);

  return 0;
}

  
