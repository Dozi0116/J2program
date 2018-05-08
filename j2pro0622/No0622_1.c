#include <stdio.h>

int main(void)
{
  char str = 'a';
  int i = 1;

  while(i <= 26){
    printf("i = %2d ... %c\n", i, str);
    i++;
    str++;
  }

  return 0;
}
