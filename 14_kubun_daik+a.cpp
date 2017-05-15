#include <stdio.h>
#include <math.h>

int main(void){
	// éŒ¾
	int a,n,b;
	double s,width,x;

	a=10;
	b=20;

	for(n=2;n<=10;n+=2){
		s=0;

		// ‰¡‚Ì‘‰Á•ª
		width = (double)(b-a)/n;
		//debug:: printf("width=%lf\n",width);
		//debug:: printf("b-width=%lf\n",b-width);

		// –ÊÏ‚ÌŒvZ
		for(x=a;x<=b-width;x+=width){

			//debug:: printf("x=%lf\n",x);
			s += ( ( pow(x,2) + 3*x + 2) + ( pow(x+width,2) + 3*(x+width) + 2) ) * width / 2;
		}
		printf("n=%2d: –ÊÏ=%lf\n",n,s);
	}
}