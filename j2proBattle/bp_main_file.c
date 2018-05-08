#include <stdio.h>
#include <stdlib.h>
#include "bp.h"

void calc_battlepoint(struct parameter player[], int number);
void disp_character(struct parameter player[]);
void output_data(struct parameter my_character, char yourname[], char yournumber[], int barcode, int number);

int main(void)
{
  int barcode;
  int number;
  struct parameter player[PLAYER];
  struct parameter my_character;

  printf("barcode=");
  scanf("%d", &barcode);

  calc_battlepoint(player, barcode);
  disp_character(player);

  number = rand()%PLAYER;
  my_character = player[number];
  output_data(my_character, "oeda", "j154XX", barcode, number);
  
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
