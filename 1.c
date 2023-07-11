#include <stdio.h>

int main(void)
{
  int n;

  scanf("%d", &n);
  printf("n = %d");

  if( n & 1 == 0 ){
    printf("%d は偶数です\n", n);
  }
  return 0;
}
