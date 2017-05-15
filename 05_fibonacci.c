#include <stdio.h>

void main(){

	int input,in_a=0,in_b=1;
	printf("自然数nを入力してください");
	scanf("%d",&input);
	for(int i=0;i<input;i++){
		if(in_a<in_b){ // 出力
			printf("%9d",in_a);
			printf("%9d",in_b);
		}
		if((i+1)%4==0) printf("\n"); // 改行

		if(i%2==0) in_a = in_a + in_b; // 偶数
		else in_b = in_a + in_b; // 奇数
	}
	printf("\n"); // 最後の改行
}