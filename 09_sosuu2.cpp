#include <stdio.h>

int func(int a,int b){
	
	// �ċN����(����؂��ꍇ)
	if(a%b==0) {
		//  printf("\ndebug:: a=%d b=%d \n",a,b);
		printf("%d%s", b, (a!=b) ? "*" : "" );
		return func(a/b,b);
	}

	// ����邾���������� or �ŏ����犄��؂�Ȃ�
	return a;
}

int main(void){

	// �ϐ��̐錾�E����
	int num,i,ans;
	printf("�f�����������鐔�������: ");
	scanf("%d",&num);
	printf("%d=",num);
	
	// �ċN�����̌J��Ԃ�
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i);
	}
}
