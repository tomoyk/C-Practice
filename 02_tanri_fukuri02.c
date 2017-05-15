#include <stdio.h>
void main(){
	int t = 10000;
	int f = 10000;
	int moto,nen;
	float nenri;
	printf("元金 年数 年利率\n");
	scanf("%d %d %f",&moto,&nen,&nenri);
	printf("単利 複利 \n");
	for(int i=0;i<5;i++){
		int(t += moto*nenri/100);
		int(f += f*nenri/100);
		printf("%d　%d\n",t,f);
	}
}