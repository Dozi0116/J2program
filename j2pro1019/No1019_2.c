#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 10

void init(double num[])
{
  srand((unsigned)time(NULL));

  int i = 0;

  for(i = 0;i < ELEMENT;i++){
    num[i] = (double)rand() / RAND_MAX;
  }
}

void disp(double num[])
{
  int i = 0;
  for(i = 0;i < ELEMENT;i++){
    printf("[%d] = %f\n", i, num[i]);
  }
}

void reverse(double num[], double rev[])
{
  int i = 0, j = ELEMENT - 1;

  for(i = 0;i < ELEMENT;i++, j--){
    rev[i] = num[j];
  }
}

int main(void)
{
  double num[ELEMENT] = {0};

  init(num);
  disp(num);

  double rev[ELEMENT] = {0};

  reverse(num, rev);
  disp(rev);

  return 0;
}
