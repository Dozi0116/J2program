#include <stdio.h>

#define NUM 7

void func1(int array[]);
void func2(int array[]);

int main(void)
{
  int array[NUM] = {40,3,29,56,7,9,38};
    
  func1(array);
  
  func2(array);

  func1(array);

  return 0;
}

void func1(int array[])
{
  int a;

  for (a=0; a<NUM; a++)
    {
     printf("%2d ", array[a]);
         }
   printf("\n");
}

void func2(int array[])
{
  int b, y;
  int tmp;
  
  for (b=0; b<NUM-1; b++) {
    for (y=NUM-1; b<y; y--) {
      if(array[y]<array[y-1]) {
	tmp = array[y];
	array[y] = array[y-1];
	array[y-1] = tmp;
      }
    }
  }
}
