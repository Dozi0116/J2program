#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define G 9.80665

int main(void)
{
  double v0 = 30;
  double t;
  int i;
  double dis;
  double maxdis = 0, maxi = 0;

  for(i = 0;i < 90;i++){
    t = ((v0 * sin(i * PI / 180)) / G) * 2;
    dis = v0 * cos(i * PI / 180) * t;

    printf("%d %f\n", i, dis);

    if(maxdis < dis){
      maxdis = dis;
      maxi = i;
    }
  }

  //printf("%fの時に%fm飛びます。\n", maxi, maxdis);
  return 0;
}

