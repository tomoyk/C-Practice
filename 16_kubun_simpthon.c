#include <stdio.h>

int main(void){

// �錾
int top,bottom,div,width,x,y;
/*
// ����
printf("���[=");
scanf("%d",&bottom);
printf("��[=");
scanf("%d",&top);
printf("�敪=");
scanf("%d",&div);
*/
bottom=10;top=20;div=10;
double area=0;

// ����
width = (top-bottom)/div;
printf("width=%d\n",width);

for(x=bottom;x<top;x+=width){	
	y=x*x+3*x+2;

	area += (x==bottom||x==div) ? y
				:	x%2==1       ? 4*y
				: x%2==0       ? 2*y
				: 0;

	printf("x=%d ",x);
	printf("y=%d\n",y);
	printf("area=%lf\n",area);

}

printf("�ʐ�S=%d\n",area);
printf("�ʐ�S=%lf\n",(double)width/3*area);

}