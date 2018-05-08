#include <stdio.h>
#include <math.h>
#include <unistd.h>

double calc_tondakyori(double,double);

int main(void)
{
  double speed, maxdis = 0.0, dis;
  double i, result;
  
  printf("speed => "); scanf("%lf", &speed);

  i = 0;
  while(i < 90){
    dis = calc_tondakyori(speed, i);
    if(maxdis < dis){
      maxdis = dis;
      result = i;
    }
    i = i + 0.1;
  }

  printf("%f, %f\n", maxdis, result);
  
  return 0;
}
