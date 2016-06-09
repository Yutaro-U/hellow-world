#include<stdio.h>

int main(void)
{
  double shincho, risou, taijyu;
  printf("身長?");  scanf("%lf", &shincho);
  risou = shincho*shincho*22/10000;
  printf("体重？"); scanf("%lf", &taijyu);
  if((risou + 5)<taijyu){printf("甘いものを減らしましょう！\n");
  }else if((risou - 5)>taijyu){printf("もっと食べましょう！\n");
  }else{printf("その調子！\n");}
 return 0;
}
