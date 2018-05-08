#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void initialize(int array[]);
void disp_array(int array[]);
void sort(int array[]);
void swap(int *a, int *b);
void bubble_sort(int array[]);


int main(void)
{
  int array[NUM];

  initialize(array);
  disp_array(array);

  sort(array);
  initialize(array);
  bubble_sort(array);
  disp_array(array);
  
  return 0;
}

void initialize(int array[])
{
  int i;
  
  srand(0);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%100;
  }
}

void disp_array(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("%d\n", array[i]);
  }
  printf("\n");

}

void sort(int array[])
{
  int i, j;
  int min_index;
  int comp_cnt = 0;
  int swap_cnt = 0;

  for (i=0; i<NUM-1; i++) {
    min_index = i;
    for (j=i+1; j<NUM; j++) {
      comp_cnt++;
      if(array[j]<array[min_index]) {
	min_index = j;
      }
    }
    swap_cnt++;
    swap(&array[i], &array[min_index]);
  }

  printf("comp => %d\n", comp_cnt);
  printf("change => %d\n\n", swap_cnt);

}

void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubble_sort(int array[])
{
  int i, j;
  int comp_cnt = 0;
  int swap_cnt = 0;

  for (i=0; i<NUM-1; i++) {
    for (j=NUM-1; i<j; j--) {
      comp_cnt++;
      if(array[j]<array[j-1]) {
	swap_cnt++;
	swap(&array[j], &array[j-1]);	
      }
    }
  }

  printf("comp => %d\n", comp_cnt);
  printf("change => %d\n\n", swap_cnt);

}
