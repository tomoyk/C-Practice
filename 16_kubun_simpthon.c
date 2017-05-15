#include <stdio.h>

int main(void){

// éŒ¾
int top,bottom,div,width,x,y;
/*
// “ü—Í
printf("‰º’[=");
scanf("%d",&bottom);
printf("ã’[=");
scanf("%d",&top);
printf("‹æ•ª=");
scanf("%d",&div);
*/
bottom=10;top=20;div=10;
double area=0;

// ˆ—
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

printf("–ÊÏS=%d\n",area);
printf("–ÊÏS=%lf\n",(double)width/3*area);

}