#include <stdio.h>

#define NUM 5

int main(void)
{
  char str[NUM];
  int i;

  for(i = 0;i < NUM;i++){
    printf("str[%d] => ", i);
    scanf("%c%*c", &str[i]);
  }

  for(i = NUM;i >= 0;i--){
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}

  
