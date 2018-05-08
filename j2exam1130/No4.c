#include <stdio.h>
#include <stdlib.h>

int calc_sum(int *array, int num)
{
  int sum = 0, i = 0;
  while(i < num){
    sum += array[i];
    i++;
  }

  return sum;
}

double calc_ave(int sum, int element)
{
  double ave;
  ave = (double)sum / element;

  return ave;
}

int main(void)
{
  int num;
  int *array;
  int i = 0;
  int sum;
  double ave;

  printf("num => ");
  scanf("%d", &num);

  array = (int *)malloc(sizeof(int) * num);

  while(i < num){
    printf("num[%d] => ", i);
    scanf("%d", &array[i]);
    i++;
  }

  sum = calc_sum(array, num); //配列と要素数を渡して配列の中身をすべて足し合わせる
  ave = calc_ave(sum, num); //sumを渡して合計/要素数を計算する

  printf("(1), 和は%dです。\n", sum);
  printf("(2), 平均は%fです。\n", ave);
  
  return 0;
}
