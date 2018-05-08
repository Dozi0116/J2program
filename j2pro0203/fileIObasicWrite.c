#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  int num;

  num = 3;

  fp = fopen("hoge.dat", "w");
  fprintf(fp, "my favorite number = %d\n", num);

  fclose(fp);

  return 0;
}
