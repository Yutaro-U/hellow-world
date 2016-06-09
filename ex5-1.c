#include <stdio.h>

int main(void)
{
  int a[10];
  int i;
  for(i=0;i<10;i++){
    scanf("%d", &a[i]);
  }
  for(i=0;i<10;i++){
    if(a[i]<0){
      printf("%dは負の数です\n",a[i]);
    }if(a[i]==0){
      printf("0が入力されました\n",a[i]);
    }if(a[i]>0){
      printf("%dは正の数です\n",a[i]);
    }
  }
  return 0;
}
