#include<stdio.h>
int main(void)
{
int x;
scanf("%d",&x);
if(x<0){
printf("%dは負の数です\n");
}if(x==0){
printf("0が入力されました\n");
}if(x>0){
printf("%dは正の数です\n");
}
return 0;
}
