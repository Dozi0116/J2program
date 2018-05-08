#include <stdio.h>

int calc_c_i(char str)
{
  int num;
  
  num = str - '0';

  return num;
}

int main(void)
{
  char barcord[100];
  int sum = 0;
  int i;

  printf("Please scaning the barcord.");
  scanf("%s", barcord);

  i = 0;
  while(barcord[i] != '\0'){
    if(barcord[i] > '0' && barcord[i] < '9'){
      sum += calc_c_i(barcord[i]);
    }
    i++;
  }
    
  printf("%d\n", sum);

  return 0;
}
  
