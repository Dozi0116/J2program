#include <stdio.h>

int main(void)
{
  
  int i=0;
  while(i < 5){
    printf("%d\n", i);
    i++;
  }
  
  for(i=0;i < 5;){
    printf("%d\n", i);
    i++;
  }
  
  i = 0;
  do{
    printf("%d\n", i);
    i++;
  }while(i < 5);

  printf("\n%c\n", 0x41);

  return 0;
}
