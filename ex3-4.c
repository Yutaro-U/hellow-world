#include <stdio.h>
int main(void)
{
  int answer=1;
  int x;
  printf("いくつだと思いますか？");
  scanf("%d", &x);
  while(x!=answer){
    if(x>answer+100){
      printf("とても大きい\n");
    }if else(x<answer-100){
	printf("とても小さい\n");
      }else if(x>answer+10){printf("大きい\n");
    }else if(x<answer-10){printf("小さい\n");
    }else if(x>answer){printf("少し大きい\n");
    }else if(x<answer){printf("少し小さい\n");
    }}
  
  printf("いくつだと思いますか？");
  scanf("%d", &x);}
(printf("あたりです！\n");)
return 0;
)}
