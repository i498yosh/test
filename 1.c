#include <stdio.h>

int main(void){
  int n;


  scanf("%d", &n);
  printf("n = ");

  if( (n & 1) == 0 ){
    printf("%d は偶数です\n", n);
  }
  else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}

//修正前は&より==の計算が優先されるため正しいif文でない。
//&の計算部分を()で閉じることで正しく処理される。
