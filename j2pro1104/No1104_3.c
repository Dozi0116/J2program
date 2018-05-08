#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int decimal;
  int temp;
  int cnt = 0;
  int *binary;
  
  printf("変換したい数(10進数)を入力 => ");
  scanf("%d", &decimal);

  temp = decimal;

  while(temp > 0){
    cnt++;
    temp /= 2;
  }

  binary = (int *)malloc((cnt+1) * sizeof(int));

  temp = decimal;
  cnt = 0;
  while(temp > 0){
    *(binary+cnt) = temp % 2;
    temp /= 2;
    cnt++;
  }
  cnt -= 1; //1ループ分多く足してしまった分の調整

  printf("%dの2進数は", decimal);
  for(;cnt >= 0;cnt--){
    printf("%d", *(binary+cnt));
  }
  printf("です。\n");

  free(binary);
  
  return 0;
}
