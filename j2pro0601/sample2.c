#include <stdio.h>

void cto2(unsigned char);

int main(void)
{
  unsigned char num;

  num = 1;
  cto2(num);
  printf("\n");
  
  num = 8;
  cto2(num);
  printf("\n");
  
  num = 0x88;
  cto2(num);
  printf("\n");
  
  return 0;
}
