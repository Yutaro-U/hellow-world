#include <stdio.h>
#include <math.h>

int main(void)
{
  int i;
  double a[10],sum,sum2,r,e,d,mean,y,z;
  sum=0;
  sum2=0;
  for(i=0;i<10;i++){
    scanf("%lf",&a[i]);
    sum=a[i]+sum;
    sum2=sum2+a[i]*a[i];
}
  mean=sum/10;
    r=sum2/10-mean*mean;
    e=sqrt(r);
  for(i=0;i<10;i++){
    d=(a[i]-mean)/e*10+50;
    printf("得点%fの偏差値は%f\n", a[i], d);
  }
  return 0;
  }
