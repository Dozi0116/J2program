/*予行問題No.1*/
#include <stdio.h>

/*kgに変換する関数*/
double pound2kg(double m)
{
  
  double kg;
  kg = m * 0.45359237;

  return kg;
}

int main(void)
{
  double lb;

  printf("lb => kg convertor\n\n");
  
  /*質量の入力*/
  printf("質量を入力してください。(単位:lb)  =>");
  scanf("%lf", &lb);

  /*関数を呼出し、変換、出力*/
  printf("%f lb => %f kg\n", lb, pound2kg(lb));

  return 0;
}
