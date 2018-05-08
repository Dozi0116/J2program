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
  char maxstr[100];
  int cnt = 0;
  int i, keep, big;

  i = 0;
  while(str[i] != '\0'){
    if('a' <= str[i] && str[i] <= 'z'){
      cnt++;
    }
    if(str[i] == ','){
      if(big < cnt){
	big = cnt;
	keep = i - 1;// ','ぶん
	maxstr[cnt] = '\0';
	for(cnt -= 1;cnt >= 0;cnt--){
	  maxstr[cnt] = str[keep];
	  keep--;
	}
      }	
      cnt = 0;
    }
    i++;
  }
  
  if(big < cnt){
    big = cnt;
    keep = i - 1;// ','ぶん
    maxstr[cnt] = '\0';
    for(cnt -= 1;cnt >= 0;cnt--){
      maxstr[cnt] = str[keep];
      keep--;
    }
  }	
  
  printf("%s\n", maxstr);
}

int main(void)
{
  //char str[] = "pencil,book,desk";
  //char str[] = "apple,strawberry,peach,lemon,watermelon,grape,raspberry";
  char str[] = "chiba,tokyo,saitama,yamaguchi";
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
