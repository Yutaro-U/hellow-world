#include<stdio.h>
#include<math.h>

int main(void)
{
  double a, b, c, d;
  printf("a? ");  scanf("%lf", &a);
  printf("b? ");  scanf("%lf", &b);
  printf("c? ");  scanf("%lf", &c);
  d = b*b - 4*a*c;
  if(a==0){if(d<0){printf("実数解は存在しない");}
    else{printf("x1=%f\n", (-c)/b);}}
  else{if(d<0){printf("実数解は存在しない");}
    else{{printf("x1=%f\n", (-b+sqrt(d))/(2*a));
    }{printf("x2=%f\n", (-b-sqrt(d))/(2*a));}
    }} return 0;
}
