#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define GA 9.80665

double calc_dist(double speed, double angle)
{
  double t, dist;

  t = ((speed * sin(angle * PI / 180)) / GA) * 2;
  dist = speed * cos(angle * PI / 180) * t;

  return dist;
}

int main(void)
{
  double a0, angle;

  printf("初速度 => ");
  scanf("%lf", &a0);
  printf("θ => ");
  scanf("%lf", &angle);

  printf("%fm 飛びます。\n", calc_dist(a0, angle));

  return 0;
}
