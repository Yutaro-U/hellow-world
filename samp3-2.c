#include <stdio.h>

int main(void)
{
  int i, max;
  scanf("%d", &max);
  i = max;
  while(i>=0){
    printf("%d\n", i);
    i=i - 1;
  }
  return 0;
}
