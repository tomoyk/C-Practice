#include <stdio.h> 
#include <math.h>
void main(){
	int a,b,c;
	printf("��A ��B ��C\n");
	scanf("%d %d %d",&a,&b,&c);
	int s = (a+b+c)/2;
	int ss = s*(s-a)*(s-b)*(s-c);
	printf("�ʐ�\n%f\n",sqrt(float(ss)));
}