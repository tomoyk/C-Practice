#include <stdio.h>
#include <math.h>

int main(void){
	// éū
	int b,a,n;
	double s=0,width,x;

	// üÍ
	printf("š[a=");
	scanf("%d",&a);
	printf("ã[b=");
	scanf("%d",&b);
	printf("æŠn=");
	scanf("%d",&n);

	// ĄĖÁŠ
	width = (b-a)/n;
	
	// ĘÏĖvZ
	for(x=a;x<=b-width;x+=width){
		//debug:: printf("x=%d\n",x);
		s += ( ( pow((double)x,2) + 3*x + 2) + ( pow(double(x+width),2) + 3*(x+width) + 2) ) * width / 2;
	}
	printf("ĘÏ=%lf\n",s);


}