#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ALPHABET 26

int Generate_pass(char *pass, int len)
{
  int i = 0;
  srand((unsigned)time(NULL));

  while(i < len){
    pass[i] = rand() % ALPHABET + 'a';
    i++;
  }

  return 1;
}

int main(void)
{
  int len;
  char *pass;

  printf("パスワードの文字数を選んでください。 => ");
  scanf("%d", &len);

  pass = (char *)malloc(sizeof(char) * len);

  Generate_pass(pass, len);

  printf("生成されたパスワードは、%sです。\n", pass);

  return 0;
}
