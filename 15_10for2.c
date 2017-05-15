#include <stdio.h>
#include <math.h>

int main(void){
  // 変数の宣言
  int input,x;
  long tmp=0;

  // 入力
  printf("10進数> ");
  scanf("%d",&input);
  //  input=4;

  // 処理
  for(x=0;(input*pow(10,-x))>0;x++){
    
    tmp+=(input%2)*pow(10,x);
    input= input>>1;
  }
  
  // 出力
  printf(" 2進数> %ld\n",tmp);
}
