#include <stdio.h>

/*printfとscanfをまとめた関数(intのみ)*/
int p_scani(int *back, char str[], int min, int max)
{
  int get;
  while("Main loop"){
    printf("%s (%d ~ %d) => ", str, min, max);

    if(scanf("%d%*c", &get) != 1){ /*数字であるかチェック*/
      printf("Error. It is not number.\n");
      scanf("%*s"); /*Enter入力分を削除*/
      continue;
    }

    if(get < min || max < get){ /*指定範囲内であるかチェック*/
      printf("Error. It is not the correct value.\n");
      continue;
    }else{
      *back = get; /*最後に値を代入*/
      break;
    }
  }
  return 0;
}
