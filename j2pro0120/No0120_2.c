#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 100

void initArray(int[]);
void dispArray(int[]);
void bubbleSort(int[]);
void swap(int*, int*);

int main(void)
{
  int numBox[ELEMENT] = {0};

  initArray(numBox);
  dispArray(numBox);

  bubbleSort(numBox);
  dispArray(numBox);

  printf("Programs End\n");
  return 0;
}

void initArray(int array[])
{
  srand((unsigned)time(NULL));
  int i;
  for(i = 0;i < ELEMENT;i++){
    array[i] = rand();
  }
}

void dispArray(int array[])
{
  int i;
  for(i = 0;i < ELEMENT;i++){
    printf("array[%2d] => %d\n", i, array[i]);
  }
}

void bubbleSort(int array[])
{
  int i, j;
  for(i = ELEMENT-1;i >= 0;i--){
    for(j = 0;j < ELEMENT-1;j++){
      if(array[j] > array[j+1]){
	swap(&array[j], &array[j+1]);
      }
    }
  }
}

void swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}
