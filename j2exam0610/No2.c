#include <stdio.h>

double calc_BMI(double, double);

double calc_BMI(double weight, double height)
{
  double bmi;

  bmi = weight / (height * height);

  return bmi;
}

int main(void)
{
  double weight, height;
  double bmi;

  printf("weight(kg) => ");
  scanf("%lf", &weight);
  printf("height(m) => ");
  scanf("%lf", &height);

  bmi = calc_BMI(weight, height);

  printf("答\nあなたのBMIは %f です。\n", bmi);

  return 0;
}

  
