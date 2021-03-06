#include <stdio.h>
#include <stdlib.h>
#include "bp.h"

#define TRUE 0
#define FALSE -1

#define ATTACK 0
#define MAGIC 1
#define HEAL 2

void calc_battlepoint(struct parameter player[], int number);
void disp_character(struct parameter player[]);
void sortStatus(struct parameter player[]);
void swap_s(struct parameter * , struct parameter *);
void swap_d(double*, double*);
int evalParameter(struct parameter player[]);
void output_data(struct parameter my_character, char yourname[], char yournumber[], int barcode, int number);

int main(void)
{
  int number;
  struct parameter player[PLAYER];
  struct parameter myChara;
  int maxIndex;
  int i;

  printf("number=");
  scanf("%d", &number);

  calc_battlepoint(player, number);
  sortStatus(player);
  disp_character(player);
  maxIndex = evalParameter(player);
  myChara = player[maxIndex];

  output_data(myChara, "oikawa", "j15412", number, maxIndex);

  return 0;
}

void disp_character(struct parameter player[])
{
  int i;

  printf("No   Name      HP    MP     AT      DE      SP      IN\n");
  for (i=0; i<PLAYER; i++) {
    printf("%4d ", i);
    printf("%s", player[i].name);
    printf(" ");
    printf("%5d %5d %7.2f %7.2f %7.2f %7.2f\n", 
	   player[i].hp, player[i].mp, player[i].attack, player[i].defence, player[i].speed, player[i].intelligence);
  }
}

void sortStatus(struct parameter player[])
{
  int i, j;
  for(i = 0;i < PLAYER;i++){
    for(j = PLAYER - 1;j > i;j--){
      if(player[j].speed > player[j-1].speed){
	swap_s(&player[j], &player[j-1]);
      }
    }
  }
}

void swap_s(struct parameter *a, struct parameter *b)
{
  struct parameter temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swap_d(double *a, double *b)
{
  double temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void initBattle(struct parameter player[], struct parameter order[]){
  int i = 0;
  for(i = 0;i < PLAYER;i++){
    order[i] = player[i];
  }
  sortStatus(order);
}

int contButtle(int alive[]){
  int i = 0;
  int cnt = 0;
  for(i = 0;i < PLAYER;i++){
    if(alive[i] != FALSE){
      cnt++;
    }
  }
  if(cnt > 1){
    return FALSE;
  }else{
    return TRUE;
  }
}

void sortAction(double array[])
{
  int i, j;
  for(i = 0;i < 3;i++){
    for(j = 3 - 1;j > i;j--){
      if(array[j] > array[j-1]){
	swap_d(&array[j], &array[j-1]);
      }
    }
  }
}

int selectAction(struct parameter player){
  double cmd = 0;
  double atk = player.attack * 100;
  double mat = player.intelligence * 100;
  double heal = 10000 - player.hp;
  
  double action[3] = {atk, mat, heal};
  sortAction(action);
  int rnd = rand() % 100;

  if(rnd < 20){
    cmd = action[0];
  }else if(rnd < 50){
    cmd = action[1];
  }else{
    cmd = action[2];
  }

  if(cmd == atk){
    cmd = ATTACK;
    printf("0 => %f\n", cmd);
  }else if(cmd == mat){
    cmd = MAGIC;
    printf("1 => %f\n", cmd);
  }else{
    cmd = HEAL;
    printf("2 => %f\n", cmd);
  }

  return (int)cmd;
}

void conbat(int command, int turn, struct parameter offence, struct parameter defence[]){
  int defIndex;
  int damage;
  switch(command){
  case ATTACK:
    do{
      defIndex = rand() % PLAYER;
    }while(defIndex == turn);
    damage = rand() % 200 + 400;
    break;
  case MAGIC:
    do{
      defIndex = rand() % PLAYER;
    }while(defIndex == turn);
    damage = rand() % 100 + 450;
    offence.mp -= damage / 3;
    break;
  case HEAL:
    defIndex = turn;
    damage = -((10000 - offence.hp) * offence.intelligence);
    printf("%d");
    offence.mp -= damage / 3;
    break;
  }

  double dodge = defence[defIndex].speed - offence.speed + 0.1;
  if(dodge > 0.8) dodge = 0.8;
  if(dodge < 0.2) dodge = 0.2;

  if((dodge < rand() % RAND_MAX) && (command != HEAL)){
    //ダメージを与える
    defence[defIndex].hp -= damage;
    printf("%d => %d\n%d damage!\n", turn, defIndex, damage);
  }else if(command == HEAL){
    //回復
    defence[defIndex].hp -= damage;
    printf("%d => %d\n%d heal!\n", turn, defIndex, -damage);
  }
}

void deadly(struct parameter player[], int alive[]){
  int i = 0;
  for(i = 0;i < PLAYER;i++){
    if(player[i].hp <= 0){
      alive[i] = FALSE;
      printf("player[%d], dead!\n", i);
    }else{
      alive[i] = TRUE;
    }
  }
}

int evalParameter(struct parameter player[])
{
  /*struct parameter buttleOrder[PLAYER];
  int alive[PLAYER] = {TRUE};
  initBattle(player, buttleOrder);
  //模擬戦

  int turn = 0;
  int com;*/

  /*while(contButtle(alive)){
    com = selectAction(buttleOrder[turn]);
    printf("command = %d\n", com);
    conbat(com, turn, buttleOrder[turn], buttleOrder);
    deadly(buttleOrder, alive);
    turn = (turn + 1) % PLAYER;
    }*/

  int i = 0;
  int point[PLAYER];

  for(i = 0;i < PLAYER;i++){
    point[i] = player[i].hp +  player[i].mp +  player[i].attack * 100  * 1.25+  player[i].defence * 100 +  player[i].intelligence * 100 * 1.25 +  player[i].speed * 100 * 1.5;
  }

  int maxIndex = 0;
  int maxPoint = 0;

  for(i = 0;i < PLAYER;i++){
    printf("point[%d] => %d\n", i, point[i]);
    if(point[i] > maxPoint){
      maxPoint = point[i];
      maxIndex = i;
    }
  }
  return maxIndex;//勝った奴;
}

void output_data(struct parameter my_character, char yourname[], char yournumber[], int barcode, int number)
{
  FILE *fp;
  char filename[64];

  sprintf(filename, "%s.dat", yournumber);
  fp = fopen(filename, "w");
  
  printf("\n");
  printf("Your character\n");
  printf("%s %5d %5d %7.2f %7.2f %7.2f %7.2f %d %d\n",
	 yourname,
	 my_character.hp,
	 my_character.mp,
	 my_character.attack,
	 my_character.defence,
	 my_character.speed,
	 my_character.intelligence,
	 barcode,
	 number);
  
  fprintf(fp, "%s %5d %5d %7.2f %7.2f %7.2f %7.2f %d %d\n",
	  yourname,
	  my_character.hp,
	  my_character.mp,
	  my_character.attack,
	  my_character.defence,
	  my_character.speed,
	  my_character.intelligence,
	  barcode,
	  number);
  
  fclose(fp);
  
}
