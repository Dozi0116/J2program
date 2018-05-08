#include <stdio.h>

int main(void)
{
  int rnd[20] = {0};
  int cut[20] = {0};
  int i;
  
  printf("No. => ");
  scanf("%d", &no);

  for(i = 0;i < no;i++){
    printf("cut[%d] => ",i);
    scanf("%d", &cut[i]);
  }
  
  /*乱数の初期化*/
  srand((unsigned)time(NULL));

  for(i = 0;i < 20;i++){
    rnd[i] = rand() % 100;
  }

  for(i = 0;i < 20;i++){
    if(cut[i] = 
