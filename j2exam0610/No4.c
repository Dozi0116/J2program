#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int pick[11];
  int i, get, red, white;
  int flg = 0, cnt = 0;

  srand((unsigned)time(NULL));
  
  for(cnt = 0;cnt < 10000;cnt++){
    for(i = 0;i < 11;i++){
      pick[i] = 0; /*pickに0を代入して準備。*/
    }
    
    i = 0;
    while(i < 3){
      get = rand() % 11;/*0 ~ 10*/
      if(pick[get] == 0){
	pick[get] = 1;/*被ってなければ追加*/
      }else{
	continue;
      }
      i++;
    }
    red = 0;
    white = 0;
    /*pick[0] ~ pick[3] => red, pick[4] ~ pick[10] => white*/
    for(i = 0;i < 11;i++){
      if(pick[i] == 1){
	if(i < 4){
	  red++;
	}else{
	  white++;
	}
      }
    }

    printf("red = %d, white = %d\n", red, white);
    if(red != 0){
      flg++;
    }
  }
  printf("result ... %d / %d => %f%%\n", flg, cnt, (double)flg / cnt * 100);
  
  return 0;
}

