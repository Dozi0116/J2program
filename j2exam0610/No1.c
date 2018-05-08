#include <stdio.h>

int calc_sum(int, int);

int calc_sum(int begin, int end)
{
  int sum;
  
  for(;begin <= end;begin++){
    sum += begin;
  }
  
  return sum;
}

int main(void)
{
  int a, b;
  int sum = 0;

  sum = calc_sum(1976, 2016);
  printf("(1) 答\n%d\n", sum);


  printf("(2)\n");

  do{
    printf("変数a => ");
    scanf("%d", &a);
    printf("変数b => ");
    scanf("%d", &b);

    if(a > b){
      printf("Error. もう一度入力して下さい。\n");
    }
  }while(a > b);
  
  sum = calc_sum(a, b);

  printf("(2) 答\n%d から %d までの和は %d です。\n", a, b, sum);

  return 0;
}
