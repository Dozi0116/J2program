#include <stdio.h>

int main(void)
{
  int point;
  char resurt;

  do{
    printf("Please enter the TEST resurt.   ->");
    scanf("%d", &point);
  }while(0 >= point&&point >= 100);
  
  if(point < 60){
    resurt = 'D';
  }else if(point < 70){
    resurt = 'C';
  }else if(point < 80){
    resurt = 'B';
  }else{
    resurt = 'A';
  }

  printf("Resurt is ... %c\n", resurt);

  return 0;
}
