#include <stdio.h>

int func(int a,int b,int cnt){
	// �ċN����(����؂��ꍇ)
	if(a%b==0) return func(a/b,b,cnt+1);

	// �o��
	if(cnt!=0) printf("%d^%d%s",b,cnt,a!=1 ? "*" : "\n" );

	// ����邾����������
	return a;
}

int main(void){

	// �ϐ��̐錾�E����
	int num,i,ans;
	printf("���R������");
	scanf("%d",&num);
	printf(" %d=",num);
	
	// �ċN�����̌J��Ԃ�
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i,0);
	}
}
