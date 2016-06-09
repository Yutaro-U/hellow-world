#include<stdio.h>

int max(int x,int y)
{
  int max;
  if(x>y){
    max=x;
    printf("大きい方は%dです\n", x);
  }else if(x<y){
    max=y;
    printf("大きい方は%dです\n", y);
  }else{
    printf("同じ値です\n");
  }
  return max;
}

int main(void)
{
  int x,y;
  scanf("%d", &x);
  scanf("%d", &y);
  printf("", max(x,y));
  return 0;
}
