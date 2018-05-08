#include <stdio.h>

int saisyou(int x,int y, int z)
{
  int min;
  if (x < y){
    min = x;
  }else if(y < z){
    min = y;
  }else{
    min = z;
  }

  return min;
}

int main(void)
{
  int a, b, c;
  int result;

  a = 5;
  b = 2;
  c = 10;

  printf("a = %d\nb = %d\nc = %d\n", a, b, c);

  result = saisyou(a, b, c);

  printf("min = %d\n", result);

  return 0;
}
