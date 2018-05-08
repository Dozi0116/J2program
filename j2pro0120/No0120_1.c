#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ELEMENT 100

void initArray(int[]);
void dispArray(int[]);
void selectionSort(int[]);
void swap(int*, int*);

int main(void)
{
  int numBox[ELEMENT] = {0};

  initArray(numBox);
  dispArray(numBox);

  selectionSort(numBox);
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

void selectionSort(int array[])
{
  int i, j;
  int index;
  for(i = ELEMENT-1;i > 0;i--){
    index = i;
    for(j = i;j >= 0;j--){
      if(array[index] < array[j]){
	index = j;
      }
    }
    swap(&array[i], &array[index]);
  }
}

void swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}
