#include <stdio.h>

int main(void)
{
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  if(x>y){
    printf("大きい方は%dです\n",x);
  }
  else if(x<y){
    printf("小さい方は%dです\n",y);
  }
  return 0;
}
