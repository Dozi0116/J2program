#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100

void generate(char []);
int count_s(char []);

int main(void)
{
  char str[NUM];
  int count;

  srand((unsigned)time(NULL));
  
  generate(str);

  count = count_s(str);

  printf("'s' = %d\n", count);

  return 0;
}

void generate(char str[])
{
  int i;

  for(i = 0; i < NUM;i++){
    str[i] = rand() % 26 + 'a';
    printf("str[%d] = %c\n", i, str[i]);
  }

}

int count_s(char str[])
{
  int i, count;

  for(i = 0;i < NUM;i++){
    if(str[i] == 's'){
      count++;
    }
  }

  return count;
}
