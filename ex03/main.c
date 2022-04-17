#include <stdio.h>

void  ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
  int a;
  int b;
  int *div;
  int *mod;

  a = 42;
  b = 10;
  div = &a;
  mod = &b;
 
  ft_div_mod(a, b, div, mod);
  printf("Value of a is: %d\n", *div);
  printf("value of b is: %d\n", *mod);
  return (0);
}
