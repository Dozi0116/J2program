#include <stdio.h>
#include <stdlib.h>

int takarakuji(int kumi, int no);

int main(void)
{
  int your_money;
  int kumi; 
  int no;
  int tousenkin;

  // あなたのお財布には5000円が入っている
  your_money = 5000;

  // 宝くじを買う
  your_money = your_money - 300;

  // 宝くじの組と番号を選ぶ 
  kumi = 78;
  no = 145329;

  // 抽選結果
  tousenkin = takarakuji(kumi, no);

  // お財布の中身を表示する
  printf("tousenkin=%10d,        money=%5d\n", tousenkin, your_money);

  return 0;
}
