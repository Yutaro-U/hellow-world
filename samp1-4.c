#include <stdio.h>

int main(void)
{
  int atari,x;
  atari=3;
  printf("1-10の数字を入力:");
  scanf("%d", &x);
    if(x==atari){
      printf("あたり(%d)！です\n", x);
    } else{
      printf("また頑張ろう.\n");
    }
  return 0;
}
