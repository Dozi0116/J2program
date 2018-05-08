#include <stdio.h>

#define NUM 10

void setNumber(int []);
void dispNumber(int []);
void doubleNumber(int []);

int main(void)
{
  int box[NUM];

  setNumber(box);
  dispNumber(box);

  doubleNumber(box);
  dispNumber(box);

  return 0;
}

void setNumber(int array[])
{
  int i;

  for(i = 0;i < NUM;i++){
    array[i] = i + 1;
  }

}

void dispNumber(int array[])
{
  int i;

  for(i = 0;i < NUM;i++){
    printf("box[%d] = %d\n", i, array[i]);
  }
  printf("\n");
  
}

void doubleNumber(int array[])
{
  int i;

  for(i = 0;i < NUM;i++){
    array[i] *= 2;
  }

}
