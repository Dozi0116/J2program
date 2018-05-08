#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  char filename[256];
  FILE *fpt;

  if (argc==2) {
    num = atoi(argv[1]);
  }
  else {
    num = 123;
  }
  
  sprintf(filename, "filename_%d", num);

  fpt = fopen(filename, "w");
  fprintf(fpt, "num=%d\n", num);
  fprintf(fpt, "num*2=%d\n", num*2);
  fprintf(fpt, "num*10=%d\n", num*10);

  fclose(fpt);
  
  return 0;
}
