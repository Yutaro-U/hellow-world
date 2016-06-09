#include <stdio.h>

double triangle(double x,double y)
{
  return x*y/2;
}
int main(void)
{
  double x,y;
  printf("底辺?");scanf("%lf", &x);
  printf("高さ?");scanf("%lf", &y);
  printf("三角形の面積は%f\n", triangle(x,y));
  return 0;
}
