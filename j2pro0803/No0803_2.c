#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define YOUSO 45

void setScore(int score[])
{
  int i;
  srand((unsigned)time(NULL));

  for(i = 0;i < YOUSO;i++){
    score[i] = rand() % 100;
  }
}

int countHighScore(int score[])
{
  int count = 0;
  int i;

  for(i = 0;i < YOUSO;i++){
    if(score[i] >= 80){
      count++;
    }
  }
  
  return count;
}

int main(void)
{
  int score[YOUSO] = {0};
  int i;
  int count;

  setScore(score);

  printf("---- (2) 確認用 ----\n");
  for(i = 0;i < YOUSO;i++){
    printf("score[%d] = %d\n", i, score[i]);
  }
  printf("\n\n");
  
  count = countHighScore(score);

  printf("---- (3) 確認用 ----\n");
  printf("80 over => %d\n", count);

  return 0;
}
