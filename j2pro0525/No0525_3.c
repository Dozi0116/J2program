#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void point(void)
{
  unsigned long int kitai;

  kitai += 200000000 * 2;
  kitai += 50000000 * 4;
  kitai += 100000 * 198;
  kitai += 100000000 * 1;
  kitai += 1000000 * 20;
  kitai += 500000 * 100;
  kitai += 10000 * 10000;
  kitai += 3000 * 100000;
  kitai += 300 * 1000000;

  kitai /= 10000000;

  printf("期待値 = %d円\n", kitai);
}


int main(void)
{

  int money;
  int kounyu;
  int kumi, no;
  int tousenkin;
  int res[2][10000] = {0};
  int i, j;
  int y;
  static int flg;
  
  if(flg == 0){
    srand((unsigned)time(NULL));
    flg++;
  }

  money = 5000;

  //printf("何枚購入しますか？");
  //scanf("%d", &kounyu);
  kounyu = 10000;

  for(i = 0;i < kounyu;i++){
    do{
      kumi = rand() % 100 + 1;
      no = rand() % 100000 + 100000;
      
      for(j = 0;j < kounyu;j++){
	if(res[0][j] == kumi&&res[1][j] == no){
	  kumi = -1;
	}
      }
      res[0][i] = kumi;
      res[1][i] = no;
      
    }while(kumi == -1);
    
    tousenkin = takarakuji(kumi, no);
    money -= 300;
    money += tousenkin;

    printf("%03d組 %d番  %10d円当選  現在%d円\n", kumi, no, tousenkin, money);
    if(tousenkin >= 1000000){
      sleep(2);
    }
  }

  printf("result... %d!\n", money - 5000);
  point();

  printf("continue?(0 => yes)");
  scanf("%d", &y);

  if(y == 0){
    main();
  }

  return 0;
}
