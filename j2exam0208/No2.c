/*この問題では、英小文字のみしか出ないことを前提に回答する。(大文字、記号などは含めない。)*/

#include <stdio.h>
#include <stdlib.h>

int dispData(char x[]);
void bubbleSort(char x[], int num);
void swap(char *a, char *b);
void count(char x[]);

int main(void)
{
  char array[] = "kisarazukougyoukoutousenmongakkou";
  int chars = 0;

  chars = dispData(array);
  printf("%s => %d characters.\n", array, chars);

  bubbleSort(array, chars);
  dispData(array);
  
  return 0;
}

int dispData(char x[])
{
  int i;

  i = 0;
  while(x[i]!='\0') {
    printf("%c", x[i]);
    i++;
  }
  printf("\n");
  return i;
}

void bubbleSort(char x[], int num)
{
  int i, j;
  for(i = num - 1;i >= 0;i--){
    for(j = 0;j < i;j++){
      if(x[j] > x[j+1]){
	swap(&x[j], &x[j+1]);
      }
    }
  }
}

void swap(char *a, char *b){
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
