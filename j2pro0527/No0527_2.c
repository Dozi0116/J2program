#include <stdio.h>

int main(void)
{
  char num;
  
  num = 0;

  do{
    printf("%d\n", num);
    num++;
  }while(num != 0);

  return 0;
}
