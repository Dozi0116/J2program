#include <stdio.h>

int main(void)
{
  int i;

  for(i = 1;i <= 40;i++){
    printf("数字 => %2d...", i);
    if(i / 10 == 3 || i % 10 == 3 || i % 3 == 0){
      /*上の条件式は左から順に、
	「10の位に3が含まれているとき」、
	「1の位に3が含まれているとき」、
	「3で割り切れる(3の倍数である)とき」である。*/
      printf("いまでしょ！\n");
    }else{
      printf("いつやるか？\n");
    }
  }

  return 0;
}
