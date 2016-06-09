#include <stdio.h>

int main(void)
{
  int n, i, j ;
  printf("n? ");
  scanf("%d", &n); 
  for(i=1; i<=n; i++){
    for(j=i+1; j<=n; j++){
      printf("(%d,%d)\n", i, j);
    }
  }
  return 0;
}
