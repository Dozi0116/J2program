#include <stdio.h>

double calc_metar(double);

int main(void)
{
  double ans;
  double yard;
  
  printf("Input yard => ");
  scanf("%lf" , &yard);

  ans = calc_metar(yard);

  printf("%f yard = %f metar\n", yard, ans);

  return 0;
}

double calc_metar(double yard)
{
  double ans;

  ans = yard * 0.9144;

  return ans;
}
