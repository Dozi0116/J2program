#include <stdio.h>

int main(void)
{
  unsigned char uc_data;

  uc_data = 1;

  do{
    cto2(uc_data);
    printf(", %02X\n", uc_data);
    uc_data = uc_data << 1;
  }while(uc_data != 0);

  return 0;
}
