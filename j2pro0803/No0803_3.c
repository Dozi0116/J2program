#include <stdio.h>

int mystrlen(char str[])
{
  int len = 0;
  int i;

  i = 0;
  while(str[i] != '\0'){
    len++;
    i++;
  }
  
  return len;
}

void wordStringCount(char str[])
{
  int cnt = 0;
  int i;

  i = 0;
  while(str[i] != '\0'){
    if('a' <= str[i] && str[i] <= 'z'){
      cnt++;
    }
    if(str[i] == ','){
      printf("%d ", cnt);
      cnt = 0;
    }
    i++;
  }
  printf("%d", cnt);
  
}
void maxWord(char str[])
{
  int big = 0;
  int i, cnt;
  int startlen, len;
  
  i = -1;
  do{
    i++;
    if('a' <= str[i] && str[i] <= 'z'){
      cnt++;
    }else{
      if(big < cnt){
	startlen = i - cnt;
	big = cnt;
      }
      cnt = 0;
    }
  }while(str[i] != '\0');

  printf("startlen = %d\n", startlen);

  for(len = startlen, i = 0;i < big;i++, len++){
    printf("%c", str[len]);
  }
  printf("\n");
  
}

int main(void)
{
  //char str[] = "pencil,book,desk";
  //char str[] = "apple,strawberry,peach,lemon,watermelon,grape,raspberry";
  //char str[] = "chiba,tokyo,saitama,yamaguchi";
  int len;
  int number;
  
  printf("\n-- (1) --\n");
  len = mystrlen(str);
  printf("len = %d", len);
  
  printf("\n-- (2) --\n");
  wordStringCount(str);

  printf("\n-- (3) --\n");
  maxWord(str);
  
  return 0;
}
