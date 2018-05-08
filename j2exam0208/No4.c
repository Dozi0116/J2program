#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOOR 3
#define CONTINUE 1000000

int main(void){
  int answer, select, open, count, i, atari = 0;
  srand((unsigned)time(NULL));

  for(count = 0;count < CONTINUE;count++){
    answer = rand() % DOOR;
    select = rand() % DOOR;
    //printf("door[%d]が正解です。\ndoor[%d]を選びました。\n", answer, select);
    
    open = openDoor(answer, select);
    //printf("ハズレのdoor[%d]を開放しました。\n", open);
    
    for(i = 0;i < DOOR;i++){
      if(i != open && i != select){
	select = i;
	break;
      }
    }
    //printf("door[%d]へ変えました。\n", select);
    
    if(select == answer){
      atari++;
      //printf("正解！\n\n");
    }
  }
  printf("%d回試した結果、乗り換えて当たる確率は%fです。\n", CONTINUE, (double)atari / CONTINUE * 100);

  return 0;
}

int openDoor(int answer, int select)
{
  int i;
  int open;

  do{
    open = rand() % DOOR;
  }while(open == answer || open == select);    

  return open;
}
