#include <stdio.h>

int main(void)
{
  char str;

  do{
    printf("英小文字のみ => ");
    scanf("%c", &str);
  }while(str < 'a' || 'z' < str);

  printf("今あなたが入力した文字は %c です。\n", str);

  return 0;
}
