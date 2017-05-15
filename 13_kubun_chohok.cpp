#include <stdio.h>
#include <math.h>

int main(void){
	// éŒ¾
	int b,a,n,width,x;
	double s=0;
/*
	// “ü—Í
	printf("‰º’[a=");
	scanf("%d",&a);
	printf("ã’[b=");
	scanf("%d",&b);
	printf("‹æ•ªn=");
	scanf("%d",&n);
*/
a=10;
b=20;
n=5;

	// ‰¡‚Ì‘‰Á•ª
	width = (b-a)/n;
	
	// –ÊÏ‚ÌŒvZ
	for(x=a;x<b;x+=width){
		// debug:: printf("i=%d\n",i);
		s += ( pow((double)x,2) + 3*x + 2) * width;
	}
	printf("–ÊÏ=%lf\n",s);
}