#include <stdio.h>
void main(){
	int t = 10000;
	int f = 10000;
	int moto,nen;
	float nenri;
	printf("���� �N�� �N����\n");
	scanf("%d %d %f",&moto,&nen,&nenri);
	printf("�P�� ���� \n");
	for(int i=0;i<5;i++){
		int(t += moto*nenri/100);
		int(f += f*nenri/100);
		printf("%d�@%d\n",t,f);
	}
}