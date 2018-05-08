#include<stdio.h>
int main (void)
{
  int number;
  int answer;
  int a;
  int b;
  
  printf("数字を入力して下さい。");
  scanf("%d",&number);

  answer = 0;
  a = 1;
  b = 0;

  while(number >= a){
    a = a * 10;
  }
  while(number > 0){
    b = number / a;
    answer = answer + b;
    number = number - b * a;
    a = a / 10;
  }

  printf("各桁の合計は%dです。\n", answer);

  return 0;
}
