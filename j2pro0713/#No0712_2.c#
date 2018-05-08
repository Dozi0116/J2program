#include <stdio.h>

int main(void)
{
  char str[] = "Which do you think more exciting, soccer or baseball?";
  int cnt = 0;
  int i;

  i = 0;
  while(str[i] != '\0'){
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
      cnt++;
    }else if(str[i] == ' '){
      printf("%d ", cnt);
      cnt = 0;
    }
    i++;
  }

  printf("%d\n", cnt);

  return 0;
}
