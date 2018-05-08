#include <stdio.h>

void star_space(int);
/*自作関数、scanfとprintfを合体させてエラー処理などを施したもの。*/
int p_scani(int*, char[], int, int);

int main(void)
{
  int num;
  int i;

  p_scani(&num, "num", 0, 100);

  for(i = 0;i < num;i++){
    star_space(num - i);
  }

  return 0;
}
