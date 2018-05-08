#include <stdio.h>

#define NUM 10

void set(int array[NUM]);
void disp(int array[NUM]);

int main(void)
{
  int array[NUM];

  set(array);
  
  disp(array);
    
  return 0;
}

void set(int array[NUM])
{
  array[0] = 2015;
  array[1] = 703;
}

void disp(int array[NUM])
{
  printf("%d\n", array[0]);
  printf("%d\n", array[1]);
}
