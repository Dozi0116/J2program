#include <stdio.h>
#include <string.h>

int wordCompare(char word1[], char word2[]);

int main(void)
{
  char str1[] = "abc";
  char str2[] = "abch";
  int cmp;

  cmp = wordCompare(str1, str2);
  printf("cmp1 = %d\n", cmp);

  cmp = strcmp(str1, str2);
  printf("cmp2 = %d\n", cmp);

  return 0;
}
  
int wordCompare(char word1[], char word2[])
{
  int i;
  int diff;

  /*
  for (i=0; i<10; i++) {
    diff = word1[i] - word2[i];
    printf("%c - %c = %d\n", word1[i], word2[i], diff);
  }
  */
  
  diff = 0;
  
  i = 0;
  while(word1[i]!=word2[i] || word1[i]!='\0' || word2[i]!='\0') {
    diff = word1[i] - word2[i];
    printf("%c - %c = %d\n", word1[i], word2[i], diff);
    i++;
  }
  
  return diff;
}
