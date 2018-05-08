#include <stdio.h>

#define ELEMENT 10

int main(void)
{
  int array[ELEMENT];
  int i;
  int *ptr = &array[0];

  for(i = 0;i < ELEMENT;i++){
    *(ptr+i) = 0;
  }

  for(i = 0;i < ELEMENT;i++){
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}
