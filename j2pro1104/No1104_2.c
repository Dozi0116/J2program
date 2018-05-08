#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num;
  int *review;
  int i;
  double ave = 0;

  printf("何人の評価を入力しますか？ => ");
  scanf("%d", &num);

  review = (int *)malloc(num * sizeof(int));

  for(i = 0;i < num;i++){
    printf("%d人目の評価を1~5で入力してください。 => ", i+1);
    scanf("%d", review+i);
  }

  for(i = 0;i < num;i++){
    printf("review[%d] = %d\n", i, *(review+i));
  }

  //calc_ave
  for(i = 0;i < num;i++){
    ave += *(review+i);
  }
  ave /= num;

  free(review);

  printf("平均点は%f点でした。\n", ave);
  
  return 0;
}
