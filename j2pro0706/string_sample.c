#include <stdio.h>

int main(void)
{
  char str[] = "programming";
  int i;

  printf("str=%s\n", str);

  i = 0;
  printf("str[%d]=%c\n", i, str[i]);

  i = 1;
  printf("str[%d]=%c\n", i, str[i]);

  i = 10;
  printf("str[%d]=%c\n", i, str[i]);
  
  i = 11;
  printf("str[%d]=%c\n", i, str[i]);

  i = 12;
  printf("str[%d]=%c\n", i, str[i]);

  i = 13;
  printf("str[%d]=%c\n", i, str[i]);

  for (i=0; i<15000; i++) {
    printf("str[%d]=%c\n", i, str[i]);
  }
  
  return 0;
}
