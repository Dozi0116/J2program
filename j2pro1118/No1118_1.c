#include <stdio.h>
#include <string.h>

int set_num(char *str, int *cnt)
{
  int i = 0;
  int num = 0;
  char temp[2] = "\0\0";

  while('0' <= str[i] && str[i] <= '9'){
    num *= 10;
    temp[0] = str[i];
    num += atoi(temp);
    i++;
    cnt++;
    //printf("num = %d\n", num);
  }

  return num;
}

int main(void)
{

  char str[] = "1,2,3,4,5,7,8,9,123";
  int i = 0;
  int sum;
  
  while(str[i] != '\0'){
    sum += set_num(&str[i], &i);
    i++;
  }

  printf("%sの合計は%dです。\n", str, sum);

  return 0;
}

  
