#include <stdio.h>

int conv_c_i(char str[])
{
  int num;
  int i;

  i = 0;
  while(str[i] != '\0'){
    num *= 10;
    num += str[i] - '0';
    i++;
  }

  return num;
}

int main(void)
{
  char str[100];
  int num;

  printf("Please enter the number.(max digit 99) => ");
  scanf("%s", str);

  num = conv_c_i(str);

  printf("%d\n", num);

  return 0;
}
