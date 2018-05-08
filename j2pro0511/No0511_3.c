#include <stdio.h>

int ruijyo(int x, int y)
{
  int ans = 1;
  int i;

  for(i = 1;i <= y;i++){
    ans *= x;
  }

  return ans;
}

int main(void)
{
  int a, b;
  int num;

  do{
    printf("○ の△ 乗が「○ ^△ 」という形になるように「,」で区切って入力して下さい。\n=>");
    scanf("%d^%d", &a, &b);
  }while(b < 0); //指数が負の数の時は受け付けない
  
  num = ruijyo(a, b);

  printf("%dの%d乗は%dです。\n", a, b, num);

  return 0;
}

