#include <stdio.h>
#include <math.h>

int main(void){
	// �錾
	int b,a,n,width,x;
	double s=0;
/*
	// ����
	printf("���[a=");
	scanf("%d",&a);
	printf("��[b=");
	scanf("%d",&b);
	printf("�敪n=");
	scanf("%d",&n);
*/
a=10;
b=20;
n=5;

	// ���̑�����
	width = (b-a)/n;
	
	// �ʐς̌v�Z
	for(x=a;x<b;x+=width){
		// debug:: printf("i=%d\n",i);
		s += ( pow((double)x,2) + 3*x + 2) * width;
	}
	printf("�ʐ�=%lf\n",s);
}