#include <stdio.h>

int N,R,i,frac=1,mol=1;

int bunshi(){
	frac *= N-i;
}

int main(void){
	
	printf("nCr 入力＞ n.r(n>=r)");
	scanf("%d.%d",&N,&R);
	
	// 分子
	for(i=0;i<N-R && i<R;i++) frac *= N-i;
	

	// 分母
	while(i) mol *= i--;

	printf("%dＣ%d=%d\n",N,R,frac/mol); 
	
}