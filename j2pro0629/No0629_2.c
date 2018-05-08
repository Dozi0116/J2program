#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char ch;
  char check[5] = {0};
  int i,x,flg;

  srand((unsigned)time(NULL));

  for(i=0;i<5;i++){
    flg=0;
    ch=rand()%26+'a';
    for(x=0;x<5;x++){
      if(check[x]==ch){
	flg=1;
	i--;
      }
    }
    if(flg==0){
      check[i]=ch;
    }
  }

  for(i=0;i<5;i++){
    printf("%c\n", check[i]);
  }

  return 0;
  
}
    
  
