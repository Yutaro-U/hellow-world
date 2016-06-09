#include <stdio.h>

int main(void)
{
  int a[10];
  int i,max,min;
  for(i=0;i<10;i++){
    scanf("%d", &a[i]);
    if(a[i]>max){max=a[i];}
    if(a[i]<min){min=a[i];}
 }
  printf("最大値は%d\n", max); 
  printf("最小値は%d\n", min); 
return 0;
}
