#include <stdio.h>

int conv_10to4(int num)
{
  int ans = 0;
  int digit = 1;
  
  while(num > 0){
    ans += (num % 4) * digit;
    num /= 4;
    digit *= 10;
  }

  return ans;
}

void putnum4(int num4, int numbox[])
{
  int i;

  for(i = 0;num4 > 0;num4 /= 10 ,i++){
    numbox[i] = num4 % 10;
  }
}

int main(void)
{
  int num;
  int num4;

  scanf("%d", &num);

  num4 = conv_10to4(num);

  int numbox[100] = {0};
  putnum4(num4, numbox);

  int i = 0;
  for(i = 0;i < 10;i++){
    printf("num[%d] = %d\n", i, numbox[i]);
  }

  return 0;
}
