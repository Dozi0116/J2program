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
void mathMax(struct status students[]);

int main(void)
{
  struct status students[NUM];
  
  srand(208);

  initialize(students);
  disp(students);

  mathMax(students);
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

void mathMax(struct status students[])
{
  int i;
  int maxScore = -1, maxNo = -1;
  double classAve = 0.0;
  for(i = 0;i < NUM;i++){
    if(students[i].math > maxScore){
      maxScore = students[i].math;
      maxNo = students[i].no;
    }
    students[i].sum += students[i].japanese + students[i].english + students[i].math;
    students[i].ave = (double)students[i].sum / 3; //ここでの3は教科数の3である。
    classAve += students[i].math;
  }
  classAve /= NUM;
  printf("mathKING => %4d\nscore    => %4d\n\n", maxNo, maxScore);
  printf("class Average(math) => %f\n", classAve);
  
}
