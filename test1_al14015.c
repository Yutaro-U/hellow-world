#include <stdio.h>
int main(void)
{
  int x;
  printf("整数を入力して下さい");
  scanf("%d\n", &x);
  if(x>0){
    printf("正の数です");
  }else{printf("正の数ではありません");
  }
  return 0;
}
