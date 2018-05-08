#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 53

void shuffle(int cards[])
{
  srand((unsigned)time(NULL));
  
  int count = rand() % (ELEMENT * 5) + 1;
  int before, after, temp;

  for(;count >= 0;count--){
    before = rand() % ELEMENT;
    after = rand() % ELEMENT;
    temp = cards[before];
    cards[before] = cards[after];
    cards[after] = temp;
  }

}

int main(void)
{
  int cards[ELEMENT];
  int i = 0;
  char suit[14];
  
  for(i = 0;i < ELEMENT;i++){
    cards[i] = i;
  }

  for(i = 0;i < ELEMENT;i++){
    if(cards[i] < 13){
      sprintf(suit, "ダイヤ");
    }else if(cards[i] < 26){
      sprintf(suit, "クラブ");
    }else if(cards[i] < 39){
      sprintf(suit, "ハート");
    }else if(cards[i] < 52){
      sprintf(suit, "スペード");
    }else{
      printf("%2d枚目:ジョーカーです。\n", i + 1);
      continue;
    }
    printf("%2d枚目:%sの%dです。\n", i + 1, suit, cards[i] % 13 + 1);
  }

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
  shuffle(cards);

  for(i = 0;i < ELEMENT;i++){
    if(cards[i] < 13){
      sprintf(suit, "ダイヤ");
    }else if(cards[i] < 26){
      sprintf(suit, "クラブ");
    }else if(cards[i] < 39){
      sprintf(suit, "ハート");
    }else if(cards[i] < 52){
      sprintf(suit, "スペード");
    }else{
      printf("%2d枚目:ジョーカーです。\n", i + 1);
      continue;
    }
    printf("%2d枚目:%sの%dです。\n", i + 1, suit, cards[i] % 13 + 1);
  } 

  return 0;
}
