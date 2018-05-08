#include <stdio.h>

#define LIMIT 10000000

int conv_c_i(char);
int compnum(int, int);
int calc(char[], int[]);
void putnum4(int, int[]);
int conv_10to4(int);

int absov = 10000;

int main(void)
{
  char barcord[100];
  int hugou[100] = {0};// 0:+, 1:-, 2:*, 3:/
  int sum, num4;
  int i;
  int keep = 0;
  int cnt = 0;
  int test = 0;

  printf("Please scaning the barcord.");
  scanf("%s", barcord);

  i = 0;
  do{
    printf("i = %d\n", i);
    putnum4(num4, hugou);
    sum = calc(barcord, hugou);
    keep = compnum(sum, keep);
    i++;
    test++;
    num4 = conv_10to4(test);

    if(barcord[i] == '\0'){
      i = 0;
      cnt++;
    }
  }while(keep != 100 && num4 >= 0 && i < LIMIT);

  printf("%d\n", keep);

  return 0;
}

int calc(char bar[], int hugou[])
{
  int sum = conv_c_i(bar[0]);
  int i;

  i = 1;
  while(bar[i] != '\0'){
    if(bar[i] > '0' && bar[i] <= '9'){
      switch(hugou[i]){
      case 0:
	sum += conv_c_i(bar[i]);
	break;
      case 1:
	sum -= conv_c_i(bar[i]);
	break;
      case 2:
	sum *= conv_c_i(bar[i]);
	break;
      case 3:
	sum /= conv_c_i(bar[i]);
	break;
      }
      i++;
    }
  }

  return sum;
}

int compnum(int sum, int keep)
{
  //printf("absov = %d\n", absov);
  int comp = 100 - sum;
  if(absov > comp * comp && comp * comp >= 0){
    absov = (100 - sum) * (100 - sum);
    keep = sum;
  }

  return keep;
}

int conv_c_i(char ch)
{
  int num;

  num = ch - '0';

  return num;
}

int conv_10to4(int num)
{
  int ans = 0;
  int digit = 1;

  while(num > 0){
    ans += (num % 4) * digit;
    num /= 4;
    digit *= 10;
  }
  printf("%d\n", ans);
  return ans;
}

void putnum4(int num4, int numbox[])
{
  int i;

  for(i = 0;num4 > 0;num4 /= 10 ,i++){
    numbox[i] = num4 % 10;
  }
}
