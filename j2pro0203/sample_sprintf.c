#include <stdio.h>

int main(void)
{
  int num;
  char mystr[256];

  num = 202;
  sprintf(mystr, "the number is [%d]", num);

  printf("message=%s\n", mystr);
  
  return 0;
}
