#include <stdio.h>

int main(void)
{
  int x, y;
  scanf("%d", &x);
  if (x % 3==0){
    printf("%dは３で割り切れます\n", x);
  }else{
    printf("%dは３で割り切れません\n", x);
}
return 0;
}
