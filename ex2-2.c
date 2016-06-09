#include <stdio.h>
#include <math.h>

int main(void)
{
  double p,q,h;
  printf("p? ");
  scanf("%lf",&p);
  q=1-p;
  h=-p*log(p)/log(2)-q*log(q)/log(2);
  printf("H=%f\n",h);
  return 0;
}
