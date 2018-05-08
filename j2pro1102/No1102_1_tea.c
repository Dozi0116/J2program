#include <stdio.h>
#include <string.h>

void my_strcpy1(char target[], char source[])
{
  int i;
  
  i=0;
  while(source[i] != '\0') {
    target[i] = source[i];
    i++;
  }
  target[i] ='\0';
}

void my_strcpy2(char *target, char *source)
{
  int i;
  
  i=0;
  while(*(source+i) != '\0') {
    *(target+i) = *(source+i);
    i++;
  }
  *(target+i) ='\0';
}

void my_strcpy3(char *target, char *source)
{
  while(*source != '\0') {
    *(target++) = *(source++);
  }
  *target ='\0';
}

void my_strcpy4(char *target, char *source)
{
  while(*source)
    *(target++) = *(source++);
  *target ='\0';  
}

void my_strcpy5(char *target, char *source)
{
  while(*(target++) = *(source++));
}



int main(void)
{
  char str1[100] = "programming";
  char str2[] = "hogehogehogehogehogehogehogefugahogehoge";
  char str3[] = "1234";
  char str4[] = "abc";

  my_strcpy5(str2, str1);
  printf("my_strcpy = %s\n", str2);

  strcpy(str3, str4);
  printf("strcpy = %s\n", str3);

  strcpy(str3, "knct");
  printf("strcpy = %s\n", str3);

  return 0;
}
