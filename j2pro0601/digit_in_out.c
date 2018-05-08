#include <stdio.h>

int main(void)
{
  int num;
  int i;
  
  num = 0xC8;

  printf("%d\n", num);
  printf("%X\n", num);
  printf("%02X\n", num);

  printf("input num(hex)="); 
  scanf("%X", &num);
  printf("%X, %d\n", num, num);

  return 0;
}
