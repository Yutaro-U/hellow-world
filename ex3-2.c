#include <stdio.h>

int main(void)
{int i,max;
  printf("max?");
  scanf("%d", &max);
  i=1;
  while(i<=max){
    if(max%i==0){
      printf("%d\n", i);
    }
    i=i+1;
  }
  return 0;
}
