#include <stdio.h>
#include <string.h>

#define WORDS "Which do you think more exciting, soccer or baseball?"

void reverce (char rev[], int element)
{
  int cur[element];
  
}

int main(void)
{
  char str[] = WORDS;
  char rev[sizeof(str)] = WORDS;
  int cnt = 0;
  int i, j;

  i = 0;
  j = 0;
  while(str[i] != '\0'){
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
      cnt++;
      rev[j] = str[i];
    }else if(str[i] == ' '){
      reverse(rev, c);
      cnt = 0;
    }
    i++;
  }

  printf("%d\n", cnt);

  return 0;
}
