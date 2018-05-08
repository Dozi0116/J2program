#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define COUNT 100000

int main(void)
{
  int result;
  int rank[5] = {0};
  int i;
  
  puts("Push enter key!!");
  getchar();

  srand((unsigned)time(NULL));

  for(i = 0;i < COUNT;i++){
    
    result = rand() % 100;
    
    if(result < 5){
      //puts("海外旅行が当たった！");
      rank[0]++;
    }else if(result < 15){
      //puts("テレビが当たった！");
      rank[1]++;
    }else if(result < 45){
      //puts("iPad2が当たった！");
      rank[2]++;
    }else if(result < 99){
      //puts("うまい棒が当たった！");
      rank[3]++;
    }else{
      //sleep(3);
      //puts("ハズレ");
      rank[4]++;
    }
  }

  printf("%d連抽選結果\n", COUNT);
  
  for(i = 0; i < 5;i++){
    printf("[%d]:%d\n", i, rank[i]);
  }
  
  return 0;
}
