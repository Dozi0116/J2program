#include <stdio.h>

int main(void)
{
  char barcord[100];

  printf("Please scaning the barcord.");
  scanf("%s", barcord);

  int result = barcord[0] - '0';
  int i = 1;

  while(barcord[i] != '\0'){
    printf("%d\n", result);
    if('0' <= barcord[i] && barcord[i] <= '9'){
      if(result * (barcord[i] - '0') <= 150){
        result *= barcord[i] - '0';
      }else if(result / (barcord[i] - '0') >= 50 && barcord[i] != 0){
        result /= barcord[i] - '0';
      }
      else if(result >= 100){
        result -= barcord[i] - '0';
      }else{
        result += barcord[i] - '0';
      }
    }
    i++;
  }

  printf("result       => %d\n", result);

  return 0;
}
