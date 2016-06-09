#include <stdio.h>
int main(void)
{
  int x,y;
  printf("２つの異なる数を入力してください。");
  scanf("%d", &x);
  scanf("%d", &y);
  while(x==y){
    printf("同じ数です。異なる数を入力してください。");
    scanf("%d",&x);
    scanf("%d",&y);
  }
  printf("%dと%dが入力されました。\n",x,y); 
    return 0;
}
