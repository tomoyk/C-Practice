#include <stdio.h>

int main(void){
/*
2
-1
1
5

4
-1
-5
-12

2
3
-2
-8
*/

	double input[3][4],num,num1;
	int i,j,k;

	// ���͏���
	printf("ax+by+cz=d\n");
	for(i=0;i<3;i++){
		printf("- - - ��%d - - -\n",i+1);
		for(j=0;j<4;j++){
			printf("%s=",(j==0 ? "a" : (j==1 ? "b" : (j==2 ? "c" : "d")) ));
			scanf("%lf",&input[i][j]);
		}
	}
	// �v�Z����
	for(i=0;i<3;i++){
		// �W����1�ɂ���
		num = input[i][0];
		input[0][i] /= num;

		// �W��
/*		if(i!=2) num1 = input[i+1][0] / input[i][0];
		for(j=0;j<4;j++){
			input[0][j] /= num1;
		}
		*/
	}



	/* �o�͏��� */
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("[%d][%d] %lf\n",i,j,input[i][j]);
		}
	}

}
