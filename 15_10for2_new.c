#include <stdio.h>

int main(void){
	int input,tmp[1000],i,j;
	printf("10i”> ");
	scanf("%d",&input);
	for(i=0;;i++){
		tmp[i]=input%2;
		if(input==1) break;
		input/=2;
	}
	for(j=i;j>=0;j--) printf("%d",tmp[j]);
	printf("\n");
}