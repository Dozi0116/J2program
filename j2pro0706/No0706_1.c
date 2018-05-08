#include <stdio.h>

int count(char str[])
{
  int cnt, i;
  for(i = 0;str[i] != '\0';i++){
    cnt++;
  }
  return cnt;
}

int main(void)
{
  char str[256];
  int cnt = 0;
  
  printf("Please enter the string.\n=> ");
  scanf("%s%*c", str);

  cnt = count(str);

  printf("string {%s} ... %d charactars.\n", str, cnt);

  return 0;
}
