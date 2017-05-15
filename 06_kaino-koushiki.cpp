#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

int main(void){
	float a,b,c,ans1,ans2;
	printf("a b c\n");
	scanf("%f %f %f",&a,&b,&c);

	int judge = b*b - 4*a*c;
	ans1 = -b / (2*a);
	ans2 = sqrt(float( abs(double(judge)) )) / (2*a);

	if(judge>0)			printf("x1=%f\nx2=%f\n",ans1+ans2,ans1-ans2);
	else if(judge==0)	printf("x=%f\n",ans1);
	else				printf("x1=%f+%fi\nx2=%f-%fi\n",ans1,ans2,ans1,ans2);
	
	return 0;
}