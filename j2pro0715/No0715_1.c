#include <stdio.h>

int main(void)
{
  char str[100];
  int i;

  printf("Please enter the number.(max digit 99) => ");
  scanf("%s", str);

  i = 0;
  while(str[i] != '\0'){
    i++;
  }

  printf("number => ");
  for(;i >= 0;i--){
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}
