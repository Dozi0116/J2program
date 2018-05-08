#include <stdio.h>

int main(void)
{
  int i, j;
  int key;

  printf("key = ");
  scanf("%d", &key);

  j = 0;
  while (j<key) {
    i = 0;
    while (i<key-j) {
      printf("*");
      i = i + 1;
    }
    printf("\n");
    j = j + 1;
  }

  return 0;
}
  
  

