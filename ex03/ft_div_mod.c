void  ft_div_mod(int a, int b, int *div, int *mod)
{
  int d;
  int r;

  d = a / b;
  r = a % b;
  *div = d;
  *mod = r;
}
