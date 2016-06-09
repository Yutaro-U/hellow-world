#include <stdio.h>

int main(void)
{
  int i,max;
  printf("max?");
  scanf("%d", &max);
  for(i=1;i<=max;i=i+1)
    {if(max%i==0)
	{printf("%d\n", i);}
    } 
  return 0;
}
