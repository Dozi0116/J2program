#include <stdio.h>

void cto2(unsigned char);

int main(void)
{
  unsigned char num = 0xC8;

  printf("%d\n", num);

  cto2(num);
  printf("\n");

  printf("%02X\n", num);

  return 0;
}
