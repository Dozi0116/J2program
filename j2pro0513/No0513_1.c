#include <stdio.h>

int calc_second(int hour, int minute, int second)
{
  int sum;

  sum = (hour * 3600) + (minute * 60) + (second);

  return sum;
}

int main(void)
{
  int hour, min, sec;
  int time_sum;
  int x, y, flg;

  do{
    puts("時刻を「:」で区切って入力して下さい。");
    scanf("%d:%d:%d", &hour, &min, &sec);
    
    if (sec >= 60){
      min += sec / 60;
      sec = sec % 60;
      flg++;
    }
    if (min >= 60){
      hour += min / 60;
      min = min % 60;
      flg++;
    }

    if(flg != 0){
      printf("時間に相応しくない表現だったので修正しました。\n");
    }
      
  }while (0 > hour||24 <= hour);
  time_sum = calc_second(hour, min, sec);

  printf("%d:%d:%dは%d秒経過しています。\n", hour, min, sec, time_sum);

  return 0;
}

