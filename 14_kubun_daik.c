#include <stdio.h>
#include <math.h>

int main(void){
	// �錾
	int b,a,n;
	double s=0,width,x;

	// ����
	printf("���[a=");
	scanf("%d",&a);
	printf("��[b=");
	scanf("%d",&b);
	printf("�敪n=");
	scanf("%d",&n);

	// ���̑�����
	width = (b-a)/n;
	
	// �ʐς̌v�Z
	for(x=a;x<=b-width;x+=width){
		//debug:: printf("x=%d\n",x);
		s += ( ( pow((double)x,2) + 3*x + 2) + ( pow(double(x+width),2) + 3*(x+width) + 2) ) * width / 2;
	}
	printf("�ʐ�=%lf\n",s);


}