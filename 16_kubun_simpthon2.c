#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

// éž
int top,bottom,div;
double x,y,width,area=0;

// üÍ
printf("ē[=");
scanf("%d",&bottom);
printf("ã[=");
scanf("%d",&top);
printf("æĒ=");
scanf("%d",&div);

/*
bottom=10;
top=20;
div=20;
*/

// æĒ:ī
if(div%2!=0) {
	printf("--- Invalid Number! ---\n The input number is not supported.\n");
	exit(0);
}

// 
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
printf("ĘĪS=%lf\n",width*area/3);

}