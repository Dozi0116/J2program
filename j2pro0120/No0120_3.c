#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENT 100
#define ALPHABET 26

void initArray(char[]);
void dispArray(char[]);
void bubbleSort(char[]);
void swap(char*, char*);

int main(void)
{
  char charBox[ELEMENT] = {0};

  initArray(charBox);
  dispArray(charBox);

  bubbleSort(charBox);
  dispArray(charBox);

  printf("Programs End\n");
  return 0;
}

void initArray(char array[])
{
  srand((unsigned)time(NULL));
  int i;
  for(i = 0;i < ELEMENT;i++){
    array[i] = rand() % ALPHABET + 'a';
  }
}

void dispArray(char array[])
{
  int i;
  for(i = 0;i < ELEMENT;i++){
    printf("array[%2d] => %c\n", i, array[i]);
  }
}

void bubbleSort(char array[])
{
  int i, j;
  for(i = ELEMENT-1;i >= 0;i--){
    for(j = 0;j < ELEMENT-1;j++){
      if(array[j] > array[j+1]){
	swap(&array[j], &array[j+1]);
      }
    }
  }
}

void swap(char *a, char *b)
{
  char temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}
