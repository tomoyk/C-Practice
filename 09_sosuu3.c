#include <stdio.h>

int func(int a,int b,int cnt){
	// 再起処理(割り切れる場合)
	if(a%b==0) return func(a/b,b,cnt+1);

	// 出力
	if(cnt!=0) printf("%d^%d%s",b,cnt,a!=1 ? "*" : "\n" );

	// 割れるだけ割った後
	return a;
}

int main(void){

	// 変数の宣言・入力
	int num,i,ans;
	printf("自然数ｎ＝");
	scanf("%d",&num);
	printf(" %d=",num);
	
	// 再起処理の繰り返し
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i,0);
	}
}
