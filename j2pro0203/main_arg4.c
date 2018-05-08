#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int input[3];

  printf("the number of argc = %d\n", argc);
  for (i=0; i<argc; i++) {
    printf("argv[%d]=%s\n", i, argv[i]);
  }
  printf("\n");

  if (argc!= 4) {
    printf("実行ファイルへの引数は3個にしてください。\n");
    printf("使用法：./a.out number\n");
    exit(1);
  }

  for (i=1; i<argc; i++) {
    input[i-1] = atoi(argv[i]);
  }

  for (i=0; i<3; i++) {
    printf("input[%d]=%d\n", i, input[i]);
  }

  return 0;
}
