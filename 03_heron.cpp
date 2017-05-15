#include <stdio.h> 
#include <math.h>
void main(){
	int a,b,c;
	printf("ï”A ï”B ï”C\n");
	scanf("%d %d %d",&a,&b,&c);
	int s = (a+b+c)/2;
	int ss = s*(s-a)*(s-b)*(s-c);
	printf("ñ êœ\n%f\n",sqrt(float(ss)));
}