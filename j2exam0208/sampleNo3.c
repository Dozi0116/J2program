#include <stdio.h>
#include <stdlib.h>

#define NUM 25

struct status {
  int no;
  int japanese;
  int english;
  int math;
  int sum;
  double ave;
};

void initialize(struct status students[]);
void disp(struct status students[]);

int main(void)
{
  struct status students[NUM];
  int index;
  double ave_math;
  
  srand(208);

  initialize(students);
  disp(students);
  
  return 0;
}

void initialize(struct status students[])
{
  int i;

  for (i=0; i<NUM; i++) {
    students[i].no = 4401+i;
    students[i].japanese = rand()%101;
    students[i].english = rand()%101;
    students[i].math = rand()%101;
    students[i].sum = 0;
    students[i].ave = 0.0;
  }
}

void disp(struct status students[])
{
  int i;

  printf("No    Ja  En  Ma  | Sum  Ave\n");
  for (i=0; i<NUM; i++) {
    printf("%d %3d %3d %3d  | %3d  %3.1f\n",
           students[i].no,
           students[i].japanese,
           students[i].english,
           students[i].math,
           students[i].sum,
	   students[i].ave);
  }
  printf("\n");
}
