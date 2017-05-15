#include <stdio.h>

#define N 3

int main(void){

	int i;
	int input[N][N+1] = { {2, -1,  1,   5},
											{4, -1, -5, -12},
											{2,  3, -2,  -8} };

	/* “ü—Íˆ—
	printf("[“ü—Í]\na b c d \n");
	for(i=0;i<3;i++){
		scanf("%d %d %d %d",&input[i][0],&input[i][1],&input[i][2],&input[i][3]);
	} */

	// “r’†o—Í
	printf("[o—Í]\nax + by + cz = dz\n");
	for(i=0;i<3;i++){
		printf("%dx + %dy + %dz = %dw\n",input[i][0],input[i][1],input[i][2],input[i][3]);
	} 
	
	
}