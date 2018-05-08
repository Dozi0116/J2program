#include <stdio.h>

int main(void)
{
  int day, a;
  char dow;

  printf("何日後？   ->");
  scanf("%d", &day);

  a = day % 7;

  switch (a){
  case 5:
    printf("月");
    break;
  case 6:
    printf("火");
    break;
  case 0:
    printf("水");
    break;
  case 1:
    printf("木");
    break;
  case 2:
    printf("金");
    break;
  case 3:
    printf("土");
    break;
  case 4:
    printf("日");
    break;
  }

  printf("曜日です。\n");

  return 0;
}


    
