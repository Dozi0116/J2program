#include <stdio.h>
#include <time.h>

int main(void)
{
  int rnd[10], min = 10000;
  int i;

  /*2で使用*/
  int index;

  /*3で使用*/
  double ave = 0.0;
  
  /*乱数の種の初期化*/
  srand((unsigned)time(NULL));
  
  /*乱数を格納*/
  for(i = 0;i < 10;i++){
    rnd[i] = rand() % 10000;
  }

  /*最小の値を検出、格納。 まとめて平均値を求める為に合計も計算*/
  for(i = 0;i < 10;i++){
    ave += rnd[i];
    if(rnd[i] < min){
      min = rnd[i];
      index = i;
    }
  }

  /*値を出力*/
  for(i = 0;i < 10;i++){
    printf("rnd[%d] = %d\n", i, rnd[i]);
  }
  printf("min = rnd[%d]:%d\n", index, min);

  printf("average = %f\n", ave / 10);
  
  
  return 0;
}
