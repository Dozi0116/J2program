#include <stdio.h>
int main (void)
{
  int hour,min,sec;
  int answer;

  printf("時間を入力して下さい。");
  scanf("%d",&hour);
  printf("分を入力して下さい。");
  scanf("%d",&min);
  printf("秒を入力して下さい。");
  scanf("%d",&sec);

  hour = hour * 3600;
  min = min * 60;
  sec = sec;

  answer = hour + min + sec;

  printf("経過時間は%d秒です。\n", answer);

  return 0;
}


  
