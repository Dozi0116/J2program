#include <stdio.h>

int main(void)
{
  int i;
  int intX;
  unsigned char charX;
  
  intX = charX = 0;
  
  i = 0;
  while(i<10) {
    printf("intX=%d, charX=%d\n", intX, charX);
    intX++;
    charX++;
    i++;
  }
  return 0;
}
