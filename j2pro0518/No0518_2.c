#include <stdio.h>

double calc_gram(double);

int main(void)
{
  double ans;
  double pond;
  
  printf("Input pond => ");
  scanf("%lf" , &pond);

  ans = calc_gram(pond);

  printf("%f pond = %f kg\n", pond, ans);

  return 0;

}

double calc_gram(double pond)
{
  double ans;

  ans = pond * 0.453592;

  return ans;
}
