#include <stdio.h>

void main(){

	int input,in_a=0,in_b=1;
	printf("���R��n����͂��Ă�������");
	scanf("%d",&input);
	for(int i=0;i<input;i++){
		if(in_a<in_b){ // �o��
			printf("%9d",in_a);
			printf("%9d",in_b);
		}
		if((i+1)%4==0) printf("\n"); // ���s

		if(i%2==0) in_a = in_a + in_b; // ����
		else in_b = in_a + in_b; // �
	}
	printf("\n"); // �Ō�̉��s
}