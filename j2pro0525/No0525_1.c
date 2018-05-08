#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int takarakuji(int, int);

int main(void)
{

  int money;
  int kounyu;
  int kumi, no;
  int tousenkin;
  int res[2][100] = {0};
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
  kounyu = 100;

  for(i = 0;i < kounyu;i++){
    do{
      kumi = rand() % 100 + 1;
      no = rand() % 100000 + 100000;
      
      for(j = 0;j < kounyu;j++){
	if(res[0][j] == kumi && res[1][j] == no){
	  kumi = -1;
	}
      }
      if(kumi != -1){
	res[0][i] = kumi;
	res[1][i] = no;
      }
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

  printf("continue?(0 => yes)");
  scanf("%d", &y);

  if(y == 0){
    main();
  }

  return 0;
}
