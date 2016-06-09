#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  double sum,x,i;
  printf("n?"); scanf("%d", &n);
  sum=0;
  for(i=0;i<=n;i++){
    x=1.0/(2*i+1);
    sum=sum+ pow(-1,i)*x;
    printf("%f\n",sum);
  }
  printf("第%d項までの近似値は%f\n", n, sum*4);
  return 0;
}
