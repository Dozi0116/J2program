#include <stdio.h>
#include <stdlib.h>

#define NUM 20
#define MAX_DIFF 100-(-100)

void set_number(int array[]);
void disp_number(int array[]);
int ask_min(int array[]);
void ask_min2(int array[], int *element, int *min2);

int main(void)
{
  int array[NUM];
  int min, min2, element;

  set_number(array);

  disp_number(array);

  min = ask_min(array);
  printf("(1)answer: %d\n", min);

  ask_min2(array, &element, &min2);
  printf("(3)answer: array[%d] = %d\n", element, min2);

  return 0;
}

void set_number(int array[])
{
  int i;

  srand(1125);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%201 - 100;
  }

}

void disp_number(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("array[%2d] = %3d\n", i, array[i]);
  }

}

int ask_min(int array[])
{
  int min = array[0];
  int i = 0;

  for(i = 0;i < NUM;i++){
    if(min > array[i]){
      min = array[i];
    }
  }

  return min;
}

void ask_min2(int array[], int *element, int *min2)
{
  int min = ask_min(array);
  int i = 0;
  int diff, min_diff = MAX_DIFF;

  for(i = 0;i < NUM;i++){
    diff = array[i] - min;
    if(0 < diff && min_diff > diff){
      *element = i;
      *min2 = array[i];
      min_diff = diff;
    }
  }
}
