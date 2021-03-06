#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

void initialize(int array[]);
void disp_array(int array[]);
int min1st(int array[]);
int min2nd(int array[]);

int main(void)
{
  int array[NUM];
  int min;
  int i;

  initialize(array);
  disp_array(array);

  min = min1st(array);
  printf("min1=%3d\n", min);

  min = min2nd(array);
  printf("min2=%3d\n", min);

  sort_num(array, 0);
  disp_array(array);

  return 0;
}

void initialize(int array[])
{
  int i;
  
  srand((unsigned)time(NULL));

  for (i=0; i<NUM; i++) {
    array[i] = rand()%100;
  }
}

void disp_array(int array[])
{
  int i;

  for (i = 0;i < NUM; i++) {
    printf("%d\n", array[i]);
  }
  printf("\n");

}

int min1st(int array[])
{
  int temp = array[0];
  int i = 0;
  for(i = 0;i < NUM;i++){
    if(temp > array[i]){
      temp = array[i];
    }
  }
  return temp;
}

int min2nd(int array[])
{
  int min1 = min1st(array);
  int temp = array[0];
  int i;
  for(i = 0;i < NUM;i++){
    if(min1 < array[i] && temp > array[i]){
      temp = array[i];
    }
  }
  return temp;
}

/*No0111_1*/

int sort_num(int array[], int index)
{
  int i, j;
  int swapIndex , temp, hoge;
  for(i = 0;i < NUM;i++){
    temp = array[i];
    swapIndex = i;
    for(j = i + 1;j < NUM;j++){
      if(temp > array[j]){
	temp = array[j];
	swapIndex = j;
      }
    }
    //swap
    hoge = array[i];
    array[i] = array[swapIndex];
    array[swapIndex] = hoge;
  }

  return array[index];
}
