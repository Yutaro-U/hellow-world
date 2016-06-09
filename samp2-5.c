#include<stdio.h>
#include<math.h>

int main(void)
{
  double a, b, c, d;
  printf("a? ");  scanf("%lf", &a);
  printf("d? ");  scanf("%lf", &b);
  printf("c? ");  scanf("%lf", &c);
  d = b*b - 4*a*c;
  if(a==0)
    {printf("x1=%f\n", (-b+sqrt(d))/(2*a));}
  else if{printf("x2=%f\n", (-b-sqrt(d))/(2*a));}

  return 0;
}
