#include <stdio.h>

int main(void)
{
  char plaintext[] = "hayakukoikoinatsuyasumi";
  int key;
  int i = 0 ,j = 0;

  printf("key => "); scanf("%d", &key);
  while(key < 0){
    key += 26;
  }
  
  for(i = 0;i < key;i++){
    for(j = 0;plaintext[j] != '\0';j++){
      plaintext[j] += 1;
      if(plaintext[j] == 'z' + 1){
	plaintext[j] = 'a';
      }
    }
  } 
  
  printf("%s\n", plaintext);

  return 0;
}
