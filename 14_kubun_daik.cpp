#include <stdio.h>
#include <math.h>

int main(void){
	// éŒ¾
	int b,a,n;
	double s=0,width,x;

	// “ü—Í
	printf("‰º’[a=");
	scanf("%d",&a);
	printf("ã’[b=");
	scanf("%d",&b);
	printf("‹æ•ªn=");
	scanf("%d",&n);

	// ‰¡‚Ì‘‰Á•ª
	width = (b-a)/n;
	
	// –ÊÏ‚ÌŒvZ
	for(x=a;x<=b-width;x+=width){
		//debug:: printf("x=%d\n",x);
		s += ( ( pow((double)x,2) + 3*x + 2) + ( pow(double(x+width),2) + 3*(x+width) + 2) ) * width / 2;
	}
	printf("–ÊÏ=%lf\n",s);


}