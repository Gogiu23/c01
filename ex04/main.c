#include <stdio.h>

void  ft_ultimate_div_mod(int *a, int *b);

int main()
{
  int c;
  int d;
  int *a;
  int *b;

  c = 42;
  d = 10;
  a = &c;
  b = &d;
  ft_ultimate_div_mod(a, b);
  printf("%p\n", a);
  printf("%d\n", *a);
  return (0);
}


