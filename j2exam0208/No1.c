#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void setData(int x[]);
void dispData(int x[]);
void bubbleSort(int x[]);
void swap(int *a, int *b);

int main(void)
{
  int array[NUM];

  setData(array);
  dispData(array);

  bubbleSort(array);
  dispData(array);

  return 0;
}

void setData(int x[])
{
  int i;

  srand(208);
  
  for (i=0; i<NUM; i++) {
    x[i] = rand()%100;
  }
  
}

void dispData(int x[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("[%d] = %2d\n", i, x[i]);
  }
  printf("\n");
}

void bubbleSort(int x[])
{
  int i, j;
  for(i = NUM - 1;i >= 0;i--){
    for(j = 0;j < i;j++){
      if(x[j] > x[j+1]){
	swap(&x[j], &x[j+1]);
      }
    }
  }
}

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
