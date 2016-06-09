#include <stdio.h>

int main(void)
{int i,max;
  printf("max?",&max);
  scanf("%d", &max);
  i=1;
  while(i<=max){
    printf("%d\n", i);
    i=i*2;
  }return 0;
}
