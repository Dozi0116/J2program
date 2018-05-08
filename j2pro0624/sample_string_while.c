#include <stdio.h>

int main(void)
{
  int i;
  char str[5+1];

  i = 0;
  while (i<5) {
    str[i] = 'a' + i;
    i = i + 1;
  }
  str[i] = '\0';

  i = 0;
  while (i<5) {
    printf("%c", str[i]);
    i = i + 1;
  }
  printf("\n");
  
  printf("(%s)\n", str);

  return 0;
}
