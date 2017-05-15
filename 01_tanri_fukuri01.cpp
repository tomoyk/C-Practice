#include <stdio.h>
void main(){
	int t = 10000;
	int f = 10000;
	printf("単利　複利　\n");
	for(int i=0;i<5;i++){
		t += 10000*4.07/100;
		f += f*4.07/100;
		printf("%d　%d\n",t,f);
	}
}