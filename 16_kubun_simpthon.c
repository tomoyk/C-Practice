#include <stdio.h>

int main(void){

// 宣言
int top,bottom,div,width,x,y;
/*
// 入力
printf("下端=");
scanf("%d",&bottom);
printf("上端=");
scanf("%d",&top);
printf("区分=");
scanf("%d",&div);
*/
bottom=10;top=20;div=10;
double area=0;

// 処理
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

printf("面積S=%d\n",area);
printf("面積S=%lf\n",(double)width/3*area);

}