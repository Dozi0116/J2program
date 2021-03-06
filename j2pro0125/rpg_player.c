#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[]);
void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[]);
void disp_array2(int no, char name[], int hp, int mp, double attack, double defence, double speed);
double maxAtk(double attack[]);

int main(void)
{
  int no[PLAYER];
  char name[PLAYER][NAME];
  int hp[PLAYER];
  int mp[PLAYER];
  double attack[PLAYER];
  double defence[PLAYER];
  double speed[PLAYER];
  int player_no;

  int index;

  srand(1);

  initialize(no, name, hp, mp, attack, defence, speed);

  disp_array(no, name, hp, mp, attack, defence, speed);

  index = maxAtk(attack);
  disp_array2(no[index], name[index], hp[index], mp[index], attack[index], defence[index], speed[index]);

  return 0;
}

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[])
{
  int i, j;

  for (i=0; i<PLAYER; i++) {
    no[i] = i;
    for (j=0; j<NAME-1; j++) { 
      name[i][j] = 'a'+rand()%26;
    }
    name[i][j] = '\0';
    hp[i] = rand()%101;
    mp[i] = rand()%101;
    attack[i] = (double)rand()/RAND_MAX;
    defence[i] = (double)rand()/RAND_MAX;
    speed[i] = (double)rand()/RAND_MAX;
  }

}

void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[])
{
  int i;

  printf(" No  Name     HP MP AT   DE   SP\n");
  for (i=0; i<PLAYER; i++) {
    printf("[%2d] ", no[i]+1);
    printf("%s", name[i]);
    printf(" ");
    printf("%2d %2d %.2f %.2f %.2f\n", hp[i], mp[i], attack[i], defence[i], speed[i]);
  }

}

void disp_array2(int no, char name[], int hp, int mp, double attack, double defence, double speed)
{
  printf(" No  Name     HP MP AT   DE   SP\n");
  printf("[%2d] ", no+1);
  printf("%s", name);
  printf(" ");
  printf("%2d %2d %.2f %.2f %.2f\n", hp, mp, attack, defence, speed);
}

double maxAtk(double attack[]){
  double max = attack[0];
  int index = 0;
  int i = 0;
  for(i = 0;i < PLAYER;i++){
    if(attack[i] > max){
      max = attack[i];
      index = i;
    }
  }
  return index;
}
			    
