#include <stdio.h>

int read_positive(void)
{
  int x,y;
  scanf("%d", &x);
  scanf("%d", &y);
  if(x>0,y>0)
    {
      printf("正の数を入力して下さい");
      scanf("%d", &x);
      scanf("%d", &y);
    }
}

int gcd(int x,int y)
{
  
}
int main(void)
{
  int x,y;
  printf("x?");x=read_positive();
  printf("y?");y=read_positive();
  printf("gcd(%d,%d)=%d\n", x, y, gcd(x,y));
  return 0;
}
