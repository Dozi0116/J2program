/*練習問題2*/
#include <stdio.h>

/*りんごとみかんの合計金額を求める関数*/
int calc_money(int apple, int orange)
{
  int money;
  money = apple * 150 + orange * 762;

  return money;
}

int main(void)
{
  int apple, orange;

  printf("apple, orange calc_program\n\n");

  while("購入個数が正の数になるまで繰返し"){
    printf("apple => ");
    scanf("%d", &apple);
    printf("orange => ");
    scanf("%d", &orange);

    if(0 <= apple && 0 <= orange){
      break;
    }else{
      printf("購入個数が正しくありません。\n");
    }
  }

  /*合計金額の計算、出力*/
  printf("りんご%d個、みかん%d個の合計金額は%d円です。\n", apple, orange, calc_money(apple, orange));

  return 0;
}
