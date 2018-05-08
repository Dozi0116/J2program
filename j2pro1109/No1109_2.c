#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int tate, yoko;
  int bomb;

  printf("マップの大きさを(縦,横)で入力 => ");
  scanf("%d,%d", &tate, &yoko);

  int map[yoko][tate];
  int i, j;
  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){
      map[j][i] = 0;
    }
  }

  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){
      if(map[j][i] == 0){
	printf("-");
      }else{
	printf("*");
      }
    }
    printf("\n");
  }

  printf("マップに配置する爆弾の割合(%)を入力 => ");
  scanf("%d", &bomb);

  printf("縦%dマス、横%dマス、爆弾%d%%で設定しました。\n", tate, yoko, bomb);

  int mass = yoko * tate;
  int per = mass * bomb / 100;
  printf("%d, %d\n", mass, per);

  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){
      if(per > 0){
	map[j][i] = 1;
	per--;
      }
    }
  }
  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){
      printf("%d", map[j][i]);
    }
    printf("\n");
  }

  int shuffle = mass * 3;
  int sTate, gTate, sYoko, gYoko;
  for(;shuffle >= 0;shuffle--){
    sTate = rand() % tate;
    sYoko = rand() % yoko;
    gTate = rand() % tate;
    gYoko = rand() % yoko;
    swap(&map[sYoko][sTate], &map[gYoko][gTate]);
  }

  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){
      if(map[j][i] == 0){
	printf("-");
      }else if(map[j][i] == 1){
	printf("*");
      }
    }
    printf("\n");
  }  
  
  return 0;
}
