#include <stdio.h>

#define NUM 40

void set_point(int point[]);
void disp_point(int point[]);
double calc_ave(int point[]);

int main(void)
{
  int point[NUM];
  double ave;

  set_point(point);

  disp_point(point);

  ave = calc_ave(point);
  
  printf("----------\n");
  printf("ave = %f\n", ave);

  return 0;
}

void set_point(int point[])
{
  /* write your program here. */
}

void disp_point(int point[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("[%2d] = %3d\n", i+1, point[i]);
  }

}

double calc_ave(int point[])
{
  /* write your program here. */
}
