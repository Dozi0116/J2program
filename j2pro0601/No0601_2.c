#include <stdio.h>

int main(void)
{
  unsigned char uc_data, max = 0;

  uc_data = 0x03;

  /*最上位位置の検出*/
  while(uc_data != 0){
    if(max < uc_data){
      max = uc_data;
    }
    uc_data = uc_data << 1;
  }

  while(max != 0){
    cto2(max);
    printf(", %02X\n", max);
    max = max >> 2;
  }

  return 0;
}
