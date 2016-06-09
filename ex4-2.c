#include <stdio.h>

int main(void)
{
  int n, i, sum;
  printf("n?"); scanf("%d", &n);
  sum=0;
  for(i=1;i<=n;i++){
    sum=sum+i*i;
  }
  printf("１から%dまでの二乗和は%d\n", n, sum);
  return 0;
}
