#include <stdio.h>

int main(void){
	int N,R,i,frac=1,mol=1;
	
	printf("nCr ���́� n.r(n>=r)");
	scanf("%d.%d",&N,&R);
	
	// ���q
	for(i=0;i<N-R && i<R;i++) frac *= N-i;

	// ����
	while(i) mol *= i--;

	printf("%d�b%d=%d\n",N,R,frac/mol); 
	
}