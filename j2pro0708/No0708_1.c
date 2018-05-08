#include <stdio.h>

int main(void)
{
  char cipher[] = "lpvtfotbjlpvuboptijjob";
  int i = 0;
  
  while(cipher[i] != '\0'){
    cipher[i] -= 1;
    i++;
  }

  printf("%s\n", cipher);

  return 0;
}
