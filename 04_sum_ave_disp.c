#include <stdio.h>
#include <math.h>
void main(){
	/* ���͏��� */
	int many,data[100],sum=0,tmp=0;
	printf("�f�[�^��: ");
	scanf("%d", &many);
	for(int i=0;i<many;i++){
		printf("�f�[�^[%d] ",i+1);
		scanf("%d",&data[i]);
		sum += data[i];
	}
	/* �o�͏��� */
	printf("���v %d\n",sum);
	int ave = sum/many;
	printf("���� %d\n",ave);
	for(int i=0;i<many;i++){
		tmp +=  (data[i]-ave)*(data[i]-ave);
	}
	float result = tmp / many;
	printf("���U %f\n",sqrt(result));
}