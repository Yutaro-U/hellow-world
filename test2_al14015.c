#include <stdio.h>

int main(void)
{
  int x,i;
  printf{"整数を入力して下さい"};
  scanf("%d\n", &x);
  for(i=0;i<=x;i+2){
    printf{"%d\n",i};
  }
  return 0;
}
