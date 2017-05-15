#include <stdio.h>
//#include <time.h>

int func(int a,int b,int cnt){
	// 再起処理(割り切れる場合)
	if(a%b==0) return func(a/b,b,cnt+1);

	// 割り切れない場合
	if(cnt==0) return a;

	// 出力
	printf("%d^%d",b,cnt);
	if(a!=1) printf("*");

//	printf("debug:: %d^%d\n",b,cnt);
//	printf("debug:: a=%d \n",a);

	// 割れるだけ割った後
	return a;
}

int main(void){

/* int start,end;
start = clock(); */

	// 変数の宣言・入力
	int num,i,ans;
	printf("素因数分解する数字を入力: ");
	scanf("%d",&num);
	printf("%d=",num);
	
	// 再起処理の繰り返し
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i,0);
	}

/* end = clock();
printf("\n%d [m/s]\n",end-start); */

}
