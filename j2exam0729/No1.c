#include <stdio.h>

double calc_circle(double radius)
{
  double answer;

  answer = 3.14 * radius * radius;
  
  return answer;
}

int main(void)
{
  double radius;
  double answer;

  printf("radius => ");
  scanf("%lf", &radius);

  answer = calc_circle(radius);

  printf("Answer => %f\n", answer);

  return 0;
}
