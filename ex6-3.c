#include <stdio.h>
#include<math.h>

double power(double x,int n)
{
  int i;
  double pow=1;
  for(i=0;i<n;i++){
    pow=pow*x;
  }
  return pow;
}

int main(void)
{
  double x;
  int n;
  printf("x?"); scanf("%lf", &x);
  printf("n?"); scanf("%d", &n);
  printf("%lfの%d乗は%lf\n", x, n, power(x,n));
  return 0;
}
