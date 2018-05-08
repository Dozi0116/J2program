#include <stdio.h>

int check3(int num)
{
  int flg;

  while(num > 0){
    if(num % 10 == 3){
      flg = 1;
    }
    num /= 10;
  }

  return flg;
}

int main(void)
{
  int i;
  int end;
  int flg;

  printf("1 ~ ? => ");
  scanf("%d", &end);

  for(i = 1;i <= end;i++){
    flg = 0;
    printf("i = %d...", i);
    flg = check3(i);

    if(i % 3 == 0){
      flg = 1;
    }

    if(flg != 1 && i % 5 == 0){
      printf("いつやるか？\n　 ＿／￣￣＼_\n"
	     "　(／ ⌒　 ⌒ ( ヽ\n"
	     "　/ (●)　(●)ヽ_ノ\n"
	     "`｜　 (_人_)　　｜\n"
	     "　＼＿＿　　 ＿／\n"
	     "　　 ｜　　　　⌒)ﾉｼ\n"
	     "　　 (_ﾉ-(_ﾉ⌒i_ﾉ\n");
    }else if(flg != 1){
      printf("いつやるか？\n");
    }else if(i % 5 == 0){
      printf("いまでしょ！\n　 ＿／￣￣＼_\n"
	     "　(／ ⌒　 ⌒ ( ヽ\n"
	     "　/ (●)　(●)ヽ_ノ\n"
	     "`｜　 (_人_)　　｜\n"
	     "　＼＿＿　　 ＿／\n"
	     "　　 ｜　　　　⌒)ﾉｼ\n"
	     "　　 (_ﾉ-(_ﾉ⌒i_ﾉ\n");
    }else{
      printf("いまでしょ！\n");
    }
  }

  return 0;
}
