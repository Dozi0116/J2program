//
#include <stdio.h>
#include <stdlib.h>

int conv_c_i(char str[])
{
  int num;
  int i;

  i = 0;
  while(str[i] != '\0'){
    num *= 10;
    num += str[i] - '0';
    i++;
  }

  return num;
}

int main(void)
{
  char barcord[100];
  int status[4];
  int i, num;

  printf("Please scan the barcord.\n");
  scanf("%s", barcord);

  num = conv_c_i(barcord);

  srand(num);

  for(i = 0;i < 4;i++){
    status[i] = rand() % 100;
  }

  printf("HP => %d\nMP => %d\nATK => %d\nDEF => %d\n", status[0], status[1], status[2], status[3]);

  return 0;
}

  
