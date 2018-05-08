#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL));

  char ch;

    ch = rand() % ('z' - 'a' + 1)/*Alphabet is 26 characters.*/ + 'a';
    
    printf("%c\n", ch);
  
  return 0;
}
