#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 40
#define COUNT 1000000

void set_birthday(int parson[])
{
  int i;

  for(i = 0;i < ELEMENT;i++){
    parson[i] = rand() % 365; //閏年を考慮しない1年は365日であることから。
  }

}

int sarch_birthday(int parson[])
{
  int i, j, result = 0;
  for(i = 0;i < ELEMENT;i++){
    for(j = i + 1;j < ELEMENT;j++){
      if(parson[i] == parson[j]){
	result++;
      }
    }
  }

  return result;
}

int main(void)
{
  int parson[ELEMENT] = {0};
  int result, flag, i;

  srand((unsigned)time(NULL));

  for(i = 0;i < COUNT;i++){
    set_birthday(parson);
    
    result = sarch_birthday(parson);
    
    if(result >= 1){
      flag++;
    }
  }
  
  printf("%d人の教室で同じ誕生日の人が少なくとも1組いたのは%d回でした。\nよって、(今回のシミュレートでの)確率は%f%%です。\n", ELEMENT,  flag, (double)flag / COUNT);
  
  return 0;
}
