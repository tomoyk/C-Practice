#include <stdio.h>
#include <math.h>

int main(void){
	// éū
	int b,a,n,width,x;
	double s=0;
/*
	// üÍ
	printf("š[a=");
	scanf("%d",&a);
	printf("ã[b=");
	scanf("%d",&b);
	printf("æŠn=");
	scanf("%d",&n);
*/
a=10;
b=20;
n=5;

	// ĄĖÁŠ
	width = (b-a)/n;
	
	// ĘÏĖvZ
	for(x=a;x<b;x+=width){
		// debug:: printf("i=%d\n",i);
		s += ( pow((double)x,2) + 3*x + 2) * width;
	}
	printf("ĘÏ=%lf\n",s);
}