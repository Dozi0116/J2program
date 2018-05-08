#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  int hop,step,jump;

  fp = fopen("hoge2.dat", "r");
  fscanf(fp, "%d\n", &hop);
  fscanf(fp, "%d\n", &step);
  fscanf(fp, "%d\n", &jump);

  printf("hop  = %5d\n", hop);
  printf("step = %5d\n", step);
  printf("jump = %5d\n", jump);

  fclose(fp);

  return 0;
}
