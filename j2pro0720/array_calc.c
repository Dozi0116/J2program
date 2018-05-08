#include <stdio.h>

int main(void)
{
  char array[100];
  int i;
  
  do{
    array[0]++;
    for(i = 0;i < 100;i++){
      if(array[i] == 3){
	array[i+1]++;
      }
    }

    for(i = 100;i >= 0;i--){
      printf("%d", array[i]);
    }
    printf("\n");
    
  }while(array[100] == 3);

  return 0;
}
