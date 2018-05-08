#include <stdio.h>
#include <stdlib.h>

void dispData(char x[]);

int main(void)
{
  char array[] = "kisarazukougyoukoutousenmongakkou";

  dispData(array);
  
  return 0;
}

void dispData(char x[])
{
  int i;

  i = 0;
  while(x[i]!='\0') {
    printf("%c", x[i]);
    i++;
  }
  printf("\n");
}
