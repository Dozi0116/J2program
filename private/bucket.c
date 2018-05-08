#include <stdio.h>

#define ELEMENT 10
#define RANGE 100

void printarray(int array[])
{
  int i;
  for(i = 0;i < ELEMENT;i++){
    printf("num[%d] = %d", i, array[i]);
  }
}

void set_num(int array[])
{
  int i;
  srand(0);

  for(i = 0;i < ELEMENT;i++){
    array[i] = rand() % RANGE;
  }
}

void bucket(int array[])
{
  int bucket_rabel[RANGE];
  int i, j, k = 0;

  for(i = 0;i < ELEMENT;i++){
    int temp = array[i];
    bucket_rabel[temp]++;
  }

  for(i = 0;i < RANGE;i++){
    for(j = bucket_rabel[i];j > 0;j--){
      array[k] = bucket_rabel[i];
      k++;
    }
  }
}

int main(void)
{
  int num[ELEMENT] = {0};

  set_num(num);

  printarray(num);

  
  bucket(num);

  printarray(num);

  
  return 0;
}
