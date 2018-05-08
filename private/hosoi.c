#include <stdio.h>
#define x5(f) f,f,f,f,f
#define x25(f) x5(f),x5(f),x5(f),x5(f),x5(f)

typedef void (*kakip)(int) ;
void A(int a) { puts("処理A"); };
void B(int a) { puts("処理B"); };
void C(int a) { puts("処理C"); };
void D(int a) { puts("処理D"); };

kakip cases[] = { x25(A), x25(B), x25(C), x25(D) }; /* void型グローバル変数 */

int main(void)
{
  int i;
  for (i = 0; i < 100; i++) cases[i](i);

  printf("\n\n\n");
  cases[22](143789);
  return 0;
}

