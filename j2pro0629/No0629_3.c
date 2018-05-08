#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char generate();

int main(void)
{
  char str[4];
  int i, flg;

  srand((unsigned)time(NULL));
  
  for(i = 0;i < 1000000;i++){
    str[3] = generate();
    printf("%c", str[3]);
    if(str[0] == 'p'&&str[1] == 'e'&&str[2] == 'e'&&str[3] == 'k'){
      flg++;
      printf("\n");
      sleep(2);
    }
    str[0] = str[1];
    str[1] = str[2];
    str[2] = str[3];
  }
  printf("\n");
  printf("yee = %d\n", flg);
  return 0;
}

char generate(void)
{
  char ch;
  int num;
  
  num=rand() % (26 + 10);
  if(num < 10){
    ch = num + '0';
  }else{
    ch = (num - 10) + 'a';
  }
  return ch;
}
