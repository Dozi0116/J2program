//提出用にNo1116_1, No1116_2と分けているが内容は全く同じである。

#include <stdio.h>

int my_strlen(const char str[])
{
  int len = 0;
  int i = 0;

  while(str[i] != '\0'){
    len++;
    i++;
  }

  return len;
}

int find_space(const char str[])
{
  return 1;
}





int main(int argc, char *argv[])
{
  /*if(argc < 2){
    puts("Error. 引数を指定してください。\n");
    return 0;
  }

  if(argc > 2){
    puts("Error. 引数が多すぎます。\n");
    return 0;
    }*/

  printf("入力が成功しました。\n今回入力した文字列 => %s\n", argv[1]);

  puts("(1)");
  printf("%d\n", my_strlen(argv[1]));

  puts("(2)");
  find_space(argv[1]);



  return 0;
}
