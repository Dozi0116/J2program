#include <stdio.h>
#include <math.h>
#include <unistd.h>

double calc_tondakyori(double,double);

int main(void)
{
  double speed, maxdis = 0.0, dis;
  int i, result;
  
  printf("speed => "); scanf("%lf", &speed);
  
  for(i = 0;i < 90;i++){
    dis = calc_tondakyori(speed, (double)i);
    printf(" ");
    if(maxdis < dis){
      maxdis = dis;
      result = i;
    }
  }

  printf("%f, %d\n", maxdis, result);
  
  return 0;
}
