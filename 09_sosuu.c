#include <stdio.h>
//#include <time.h>

int func(int a,int b,int cnt){
	// �ċN����(����؂��ꍇ)
	if(a%b==0) return func(a/b,b,cnt+1);

	// ����؂�Ȃ��ꍇ
	if(cnt==0) return a;

	// �o��
	printf("%d^%d",b,cnt);
	if(a!=1) printf("*");

//	printf("debug:: %d^%d\n",b,cnt);
//	printf("debug:: a=%d \n",a);

	// ����邾����������
	return a;
}

int main(void){

/* int start,end;
start = clock(); */

	// �ϐ��̐錾�E����
	int num,i,ans;
	printf("�f�����������鐔�������: ");
	scanf("%d",&num);
	printf("%d=",num);
	
	// �ċN�����̌J��Ԃ�
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i,0);
	}

/* end = clock();
printf("\n%d [m/s]\n",end-start); */

}
