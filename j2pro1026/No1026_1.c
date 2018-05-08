#include <stdio.h>

void my_strlen1(const char str[])
{
  //今までのやり方
  int length = 0;
  
  while(str[length] != '\0'){
    length++;
  }
  
  printf("[%s] => %d characters.\n", str, length);
}

void my_strlen2(char *str)
{
  //ポインタを用いた変更版
  int length = 0;

  while(*(str + length) != '\0'){
    length++;
  }

  printf("[%s] => %d characters.\n", str, length);
}

void my_strlen3(char *str, int *answer)
{
  //ポインタ版2
  int length = 0;
  
  while(str[length] != '\0'){
    length++;
  }

  *answer = length;
  
  printf("[%s] => %d characters.\n", str, *answer);
}

void tea_strlen1(char *str)
{
  int length = 0;
  char *pt = str;

  while(*pt){
    pt++;
  }

  length = pt - str;

  printf("[%s] => %d characters.\n", str, length);

}

int main(void)
{
  char str[] = "length";
  int length;

  my_strlen1(str);

  my_strlen2(&str[0]);

  my_strlen3(&str[0], &length);

  tea_strlen1(&str[0]);
  
  return 0;
}
