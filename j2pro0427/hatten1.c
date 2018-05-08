#include <stdio.h>

int main(void)
{
  int i, j;
  int youso[50] = {0};
  int sum[10] = {0};
  
  srand(time(NULL));
  
 
  for(i = 0;i < 50;i++){
    /*do{
      printf("youso%d =>", i);
      scanf("%d", &youso[i]);
      }while(youso[i] < 0||youso[i] > 100);*/
    youso[i] = rand() % 100;
    printf("youso[%d] => %d\n", i, youso[i]);
  }

  for(i = 0;i < 50;i++){
    j = 0;
    while(j < 10){
      if(youso[i] < 10 * j + 10){
	sum[j]++;
	break;
      }else{
	j++;
      }
    }
  }

  for(j = 0;j < 10;j++){
    if(j != 9){
      printf("%2d ~ %3d ... %2d\n",j * 10, j * 10 + 9, sum[j]);
    }else{
      printf("%2d ~ %3d ... %2d\n",j * 10, j * 10 + 10, sum[j]);
    }
  }

  return 0;
}
