#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

struct parameter {
  int no;
  char name[NAME];
  int hp;
  int mp;
  double attack;
  double defence;
  double speed;
};

void initialize(struct parameter player[]);
void disp_array(struct parameter player[]);
void disp_array2(struct parameter player);
void sortStatus(struct parameter player[]);
void swap(struct parameter *a, struct parameter *b);

int main(void)
{
  struct parameter player[PLAYER];

  srand(1);

  initialize(player);

  disp_array(player);

  sortStatus(player);

  disp_array(player);

  return 0;
}

void initialize(struct parameter player[])
{
  int i, j;

  for (i=0; i<PLAYER; i++) {
    player[i].no = i;
    for (j=0; j<NAME-1; j++) { 
      player[i].name[j] = 'a'+rand()%26;
    }
    player[i].name[j] = '\0';
    player[i].hp = rand()%100;
    player[i].mp = rand()%100;
    player[i].attack = (double)rand()/RAND_MAX;
    player[i].defence = (double)rand()/RAND_MAX;
    player[i].speed = (double)rand()/RAND_MAX;
  }

}

void disp_array(struct parameter player[])
{
  int i;

  printf(" No  Name     HP MP AT   DE   SP\n");
  for (i=0; i<PLAYER; i++) {
    printf("[%2d] ", player[i].no+1);
    printf("%s", player[i].name);
    printf(" ");
    printf("%2d %2d %.2f %.2f %.2f\n", 
	   player[i].hp, player[i].mp, player[i].attack, player[i].defence, player[i].speed);
  }

}

void disp_array2(struct parameter player)
{
  printf(" No  Name     HP MP AT   DE   SP\n");
  printf("[%2d] ", player.no+1);
  printf("%s", player.name);
  printf(" ");
  printf("%2d %2d %.2f %.2f %.2f\n", 
	 player.hp, player.mp, player.attack, player.defence, player.speed);

}

void sortStatus(struct parameter player[])
{
  int i, j;
  for(i = 0;i < PLAYER;i++){
    for(j = PLAYER - 1;j > i;j--){
      if(player[j].hp > player[j-1].hp){
	swap(&player[j], &player[j-1]);
      }
    }
  }
}

void swap(struct parameter *a, struct parameter *b)
{
  struct parameter temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
