#include <stdio.h>

int main(void)
{
  FILE *fp;

  fp = fopen("savedata.dat", "w");

  fprintf(fp, "this is a %d!!\n", 35);

  fclose(fp);

  return 0;
}
