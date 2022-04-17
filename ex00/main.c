#include <stdio.h>
void  ft_ft(int *nbr);

int main(void)
{
  int a;
  int *nbr;
  
  nbr = &a;
  printf("%p", nbr);
  ft_ft(0); 
  return (0);
}
