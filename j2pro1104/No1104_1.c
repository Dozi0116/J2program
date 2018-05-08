#include <stdio.h>

#define ELEMENT 500

int main(void)
{
  int num;
  int review[ELEMENT];
  int i;
  double ave = 0;

  printf("何人の評価を入力しますか？ => ");
  scanf("%d", &num);

  for(i = 0;i < num;i++){
    printf("%d人目の評価を1~5で入力してください。 => ", i+1);
    scanf("%d", &review[i]);
  }

  //calc_ave
  for(i = 0;i < num;i++){
    ave += review[i];
  }
  ave /= num;

  printf("平均点は%f点でした。\n", ave);
  
  return 0;
}
