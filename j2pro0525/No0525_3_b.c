#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int takarakuji(int, int);

int main(void)
{

  int money;
  unsigned  long int kounyu;
  int kumi, no;
  int tousenkin;
  int i;
  
  srand((unsigned)time(NULL));

  money = 0;

  scanf("%d", &kounyu);

  for(i = 0;i < kounyu;i++){
    kumi = rand() % 100 + 1;
    no = rand() % 100000 + 100000;
    
    tousenkin = takarakuji(kumi, no);
    money += tousenkin;
    
    printf("%d\n", money / ++i);
  }

  //printf("%d, %d\n", money, money / kounyu);
  
  return 0;
}
