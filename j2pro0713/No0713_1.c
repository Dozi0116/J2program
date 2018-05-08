#include <stdio.h>

int main(void)
{
  char str[] = "WHich do you think more exciting, soccer or baseball?";
  int i;
  int cnt;

  i = 0;
  while(str[i] != '\0'){
    if(str[i] == ' '){
      cnt++;
    }
    i++;
  }
  i++;

  printf("sentence => %d\n", cnt);

  return 0;
}
