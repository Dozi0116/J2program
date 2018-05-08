#include <stdio.h>

void my_strcpy(char *target, const char *source)
{
  int i = 0;
  
  while(*(source+i) != '\0'){
    *(target+i) = *(source+i);
    i++;
  }
  *(target+i) = '\0';
}

int main(void)
{
  char str1[] = "Programing";
  char str2[100];

  my_strcpy(&str2[0], &str1[0]);
  printf("%s\n", str2);

  return 0;
}
