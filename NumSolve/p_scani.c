#include <stdio.h>

/*printf��scanf���܂Ƃ߂��֐�(int�̂�)*/
int p_scani(int *back, char str[], int min, int max)
{
  int get;
  while("Main loop"){
    printf("%s (%d ~ %d) => ", str, min, max);

    if(scanf("%d%*c", &get) != 1){ /*�����ł��邩�`�F�b�N*/
      printf("Error. It is not number.\n");
      scanf("%*s"); /*Enter���͕����폜*/
      continue;
    }

    if(get < min || max < get){ /*�w��͈͓��ł��邩�`�F�b�N*/
      printf("Error. It is not the correct value.\n");
      continue;
    }else{
      *back = get; /*�Ō�ɒl����*/
      break;
    }
  }
  return 0;
}
