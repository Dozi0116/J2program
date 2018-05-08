#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generate(void)
{
  char ch;
  ch = rand() % (26 + 26 + 10);
  if(ch < 26){
    ch += 'a';
  }else if(ch < (26 + 26)){
    ch += 'A' - 26;
  }else{
    ch += '0' - (26 + 26);
  }
  return ch;
}
  

int main(void)
{
  srand((unsigned)time(NULL));
  int words, limit;
  int i, j;
  
  puts("Password generate program");
  printf("文字数は？(default 8) => ");
  scanf("%d", &words);
  printf("何個作る？(default 1) => ");
  scanf("%d", &limit);

  char str[words + 1];

  for(i = 0;i < limit;i++){
    for(j = 0;j < words;j++){
      str[j] = generate();
      printf("%d ",str[j]);
    }
    str[j] = '\0';
    printf("候補%d: [%s]\n", i, str);
  }
  
  return 0;
}

  
