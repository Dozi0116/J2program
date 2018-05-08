#include <stdio.h>

char my_toupper(char ch)
{
  ch += 'A' - 'a';
  
  return ch;
}

int main(void)
{
  char ch, bigch;

  do{
    printf("英小文字のみ => ");
    scanf("%c%*c", &ch);
  }while(ch < 'a' || 'z' < ch);
  
  bigch = my_toupper(ch);

  printf("%c => %c\n", ch, bigch);

  return 0;
}
