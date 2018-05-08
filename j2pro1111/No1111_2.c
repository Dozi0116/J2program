#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc != 2){
    printf("Error.\n");
    exit(0);
  }

  int i = 0;
  int num;

  for(i = 0;argv[1][i] != '\0';i++){
    if('0' <= argv[1][i] && argv[1][i] >= '9'){
      printf("Error.\n");
      exit(0);
    }
  }

  num =  atoi(argv[1]);

  printf("%d\n", num * 2);
  
  return 0;
}
