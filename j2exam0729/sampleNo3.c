#include <stdio.h>

int mystrlen(char str[]);
void wordStringCount(char str[]);
void maxWord(char str[]);

int main(void)
{
  char str[] = "pencil,book,desk";
  //char str[] = "apple,strawberry,peach,lemon,watermelon,grape,raspberry";
  //char str[] = "chiba,tokyo,saitama,yamaguchi";
  int len;
  int number;
  
  printf("\n-- (1) --\n");
  len = mystrlen(str);
  printf("len = %d\n", len);
  
  printf("\n-- (2) --\n");
  wordStringCount(str);

  printf("\n-- (3) --\n");
  maxWord(str);
  
  return 0;
}
