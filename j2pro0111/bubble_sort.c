#include "sort.h"

void bubble_sort(int array[])
{
  int i, j;

  for (i=0; i<NUM-1; i++) {
    for (j=NUM-1; i<j; j--) {
      if(array[j]<array[j-1]) {
	swap(&array[j], &array[j-1]);	
      }
    }
  }

}
