#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

// �錾
int top,bottom,div;
double x,y,width,area=0;

// ����
printf("���[=");
scanf("%d",&bottom);
printf("��[=");
scanf("%d",&top);
printf("�敪=");
scanf("%d",&div);

/*
bottom=10;
top=20;
div=20;
*/

// �敪:�
if(div%2!=0) {
	printf("--- Invalid Number! ---\n The input number is not supported.\n");
	exit(0);
}

// ����
width = (double)(top-bottom)/div;
// printf("width=%lf\n",width);

for(x=bottom;x<=top;x+=width){	
	y=x*x+3*x+2;

	area += (x==bottom||x==top) ? y
		  : (fmod(x,2*width)!=0 )			? 4*y
		  : (fmod(x,2*width)==0)			? 2*y
		  : 0;

/*
		  : (fmod(x,2*width) > fmod(x+1,2*width) )			? 4*y
		  : (fmod(x,2*width) < fmod(x+1,2*width) )			? 2*y
*/

// printf("X=%lf...%lf\n",x,fmod(x,2*width));

/*
	printf("x=%lf ",x);
	printf("y=%lf\n",y);
	printf("area=%lf\n",area);
*/

}

// printf("area=%lf\n",area);
printf("�ʐ�S=%lf\n",width*area/3);

}