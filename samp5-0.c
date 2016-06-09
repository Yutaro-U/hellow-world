#include <stdio.h>

int main(void)
{
  int i,j,n,l;
  n=5;
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }
    for(l=1;l<=i+(i-1);l++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
