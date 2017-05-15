#include <stdio.h>

int func(int a,int b){
	
	// 再起処理(割り切れる場合)
	if(a%b==0) {
		//  printf("\ndebug:: a=%d b=%d \n",a,b);
		printf("%d%s", b, (a!=b) ? "*" : "" );
		return func(a/b,b);
	}

	// 割れるだけ割った後 or 最初から割り切れない
	return a;
}

int main(void){

	// 変数の宣言・入力
	int num,i,ans;
	printf("素因数分解する数字を入力: ");
	scanf("%d",&num);
	printf("%d=",num);
	
	// 再起処理の繰り返し
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i);
	}
}
