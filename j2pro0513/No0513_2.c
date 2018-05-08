#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*
 * オープニング
 */
void opening(void)
{
  printf("               ＿＿_  \n");
  printf("               |  ／  \n");
  printf("              /  /    \n");
  printf("             /  /     \n");
  printf("    ＿＿_   /  /      ┏━━━━┓\n");
  printf("    |  ／  /  /       ┗━━━┓┃\n");
  printf("   /  /   /  /        ┏━━━┛┃\n");
  printf("  /  /   /  /         ┃┏━━━┛\n");
  printf("  |  ￣￣ ／          ┃┗━━━┓\n");
  printf("   ￣￣￣￣           ┗━━━━┛    Dice Game\n");
}

int getInputNumber(void)
{
  int num;

  do{
    printf("何回回す？(1-100) = ");
    scanf("%d", &num);
  }while(num<1 || 100<num);
  
  return num;
}

/*
 * サイコロ本体
 */
int dice(int num)
{
  int rnd;
  int i;

  printf("さいころの目は...\n");
  
  for(i = 0;i < num;i++){
    sleep(1);
    rnd = rand() % 6 + 1;
    printf("%d\n", rnd);
  }
  
  return rnd;
}

/*
 * 仮想通貨に変換して結果出力
 */
void calcMoney(int num)
{
  printf("%dJ手に入れた！\n", num * 100);
}

int main(void)
{
  int num;
  int face;

  // 乱数を初期化
  srand((unsigned)time(NULL));

  // ゲームオープニングメッセージ
  opening();

  // サイコロが何回転がるか，キーボードから入力
  num = getInputNumber();
  
  // サイコロをふる
  face = dice(num);

  // サイコロの目に応じて金額が計算されて，出力される．
  calcMoney(face);

  return 0;
}
