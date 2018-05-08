#include <stdio.h>

int calc_c_i(char str)
{
  int num;
  
  num = str - '0';

  return num;
}

int main(void)
{
  char barcord[100];
  int hugou[100] = {0};// 0:+, 1:-, 2:*, 3:/
  int sum;
  int i, j;
  int absov = 10000, keep = 0;
  int cnt = 0;

  printf("Please scaning the barcord.");
  scanf("%s", barcord);
  
  j = 0;
  do{
    i = 0;
    sum = 0;
    while(barcord[i] != '\0'){
      if(barcord[i] >= '0' && barcord[i] <= '9'){
	switch(hugou[i]){
	case 0:
	  sum += calc_c_i(barcord[i]);
	  break;
	case 1:
	  sum -= calc_c_i(barcord[i]);
	  break;
	case 2:
	  sum *= calc_c_i(barcord[i]);
	  break;
	case 3:
	  sum /= calc_c_i(barcord[i]);
	  break;
	}
	if(i == 0){
	  sum = calc_c_i(barcord[i]);
	}
      }
      i++;
    }
    printf("ans = %d\n", sum);
      if(absov > (100 - sum) * (100 - sum)){
	absov = (100 - sum) * (100 - sum);
	keep = sum;
      }
      hugou[j]++;
      j++;
      if(barcord[j] == '\0'){
	j = 0;
	cnt++;
      }
  }while(cnt != 3);
    
  printf("%d\n", keep);

  return 0;
}
