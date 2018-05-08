#include <stdio.h>

int set_num(int, int);
int rset_num(int);

int main(void)
{
  int num_10 = 10;
  int num_2, num_8;
  int rnum_10, rnum_2, rnum_8;

  while("Main loop"){
    num_2 = set_num(num_10, 2);
    num_8 = set_num(num_10, 8);

    rnum_10 = rset_num(num_10);
    rnum_2 = rset_num(num_2);
    rnum_8 = rset_num(num_8);
    
    printf("%03d = %010d = %04d\n", num_10, num_2, num_8);
    printf("%03d = %010d = %04d\n\n", rnum_10, rnum_2, rnum_8);
    
    if(num_10 == rnum_10&&num_2 == rnum_2&&num_8 == rnum_8){
      break;
    }
    
    num_10++;
  }

  printf("resurt...%d\n", num_10);

  return 0;
}

int set_num(int num,int decimal)
{
  int digit = 1;
  int setnum = 0;

  while(num > 0){
    setnum += num % decimal * digit;
    digit *= 10;
    num /= decimal;
  }

  return setnum;
}

int rset_num(int num)
{
  int rnum = 0;

  while(num > 0){
    rnum *= 10;
    rnum += num % 10;
    num /= 10;
  }

  return rnum;
}

