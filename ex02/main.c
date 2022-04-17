#include <stdio.h>

void  ft_swap(int *a, int *b);

int main()
{
  int a;
  int b;
  int *ptr;
  int *ptr2;
 
    a = 21;
    b = 42;
    printf("%d\n", a);
    printf("%d\n", b);
    ptr = &a;
    ptr2 = &b;
    ft_swap(&a, &b);

  printf("%d\n", *ptr);
  printf("%d\n", *ptr2);
  return (0);
}
