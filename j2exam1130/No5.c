#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
#define center(x) x / 2

void makeBingo(int card[][SIZE]);
void dispBingo(int card[][SIZE]);
int check_double(int card[][SIZE], int check);
  
int main(void)
{
  int card[SIZE][SIZE] = {{0}};
  int seed;

  seed = (unsigned)time(NULL);
  srand(seed);

  printf("(3)のみやりました。\n\nBINGO CARD!(seed:%d)\n", seed);

  makeBingo(card);
  dispBingo(card);
  
  return 0;
}

int check_double(int card[][SIZE], int check)
{
  int i, j;
  
  for(i = 0;i < SIZE;i++){
    for(j = 0;j < SIZE;j++){
      if(card[i][j] == check){
	return 0;
      }
    }
  }
  
  return 1;
}


void makeBingo(int card[][SIZE])
{
  int i, j, temp, flag;
  for(i = 0;i < SIZE;i++){ //ビンゴカードに数字をセット(重複しているならここではじく)
    j = 0;
    do{
      flag = 0;
      temp = rand() % 15 + (j * 15) + 1;
      flag = check_double(card, temp);
      if(flag == 1){
	card[i][j] = temp;
	j++;
      }
    }while(j < SIZE);
  }

  card[center(SIZE)][center(SIZE)] = 0;
}

void dispBingo(int card[][SIZE])
{
  int i, j;
  
  for (i=0; i<SIZE; i++) {
    for (j=0; j<SIZE; j++) {
      printf("%3d", card[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
}

