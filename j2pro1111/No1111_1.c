#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  char **profile;
  int i, j;
  int people;
  int len;

  printf("何人の名前を登録しますか? => ");
  scanf("%d", &people);

  profile = (char **)malloc(sizeof(char *) * people);

  for(i = 0;i < people;i++){
    printf("%d人目の名前を登録します。\nローマ字の文字数を入力してください。 => ", i + 1);
    scanf("%d%*c", &len);
    profile[i] = (char *)malloc(sizeof(char) * len);
    printf("名前をローマ字で入力してください。 => ");
    fgets(profile[i], len+1, stdin);
    printf("%d人目, %sさんを登録しました。\n", i + 1, profile[i]);

    sleep(1);
  }

  for(i = 0;i < people;i++){
    printf("%d人目, %sさん\n", i + 1, profile[i]);
  }

  for(i = 0;i < people;i++){
    free(profile[i]);
  }
  free(profile);
  
    
  return 0;
}
