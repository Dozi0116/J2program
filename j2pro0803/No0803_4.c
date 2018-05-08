#include <stdio.h>

int wordCompare(char word1[], char word2[])
{
  int flg = 0;
  int i;

  i = 0;
  while(word1[i] != '\0' || word2[i] != '\0'){
    if(word1[i] > word2[i]){
      flg = 1;
      break;
    }
    if(word1[i] < word2[i]){
      flg = -1;
      break;
    }
    i++;
  }
  
  return flg;
}

int main(void)
{
  char word1[100];
  char word2[100];
  int flg;

  printf("word1 => ");
  scanf("%s", word1);

  printf("word2 => ");
  scanf("%s", word2);

  flg = wordCompare(word1, word2);

  printf("辞書でより後にくるのは");
  switch(flg){
  case 1:
    printf("%sです\n", word1);
    break;
  case 0:
    printf("どちらも同じ単語なのでどちらとも言えません\n");
    break;
  case -1:
    printf("%sです\n", word2);
    break;
  }

  return 0;
}
