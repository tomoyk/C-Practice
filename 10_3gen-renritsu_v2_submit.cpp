#include <stdio.h>

int main(void){

	// �ϐ��̐錾
	double num,z,y,x,input[3][4];
	int i,j,k,waru;

	// ���͏���
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			// printf("%s=",(j==0 ? "a" : (j==1 ? "b" : (j==2 ? "c" : "d")) ));
			printf("[%d][%d] ",i,j);

			scanf("%lf",&input[i][j]);
		}
	}

	// ���Z����
	for(k=0;k<3;k++){
		num = input[k][k];
		
		// ��0,1,2��x,y,z�̌W����1�ɂ���
		for(j=0;j<4;j++){
			input[k][j] /= num;
		}

		for(j=k+1;j<3;j++){ // X�̌W����Еt����

			// ��0��N�{����
			waru = int(input[j][k] / input[k][k]);

			// ��0�Ǝ�j���r���č����Ƃ�
			for(i=k;i<4;i++){
				input[j][i] = input[j][i] - waru * input[k][i];
			}

		}
	}

	// �ϐ��֑��
	z = input[2][3] / input[2][2];
	y = (input[1][3] - input[1][2]*z) / input[1][1];
  x = (input[0][3] - input[0][1]*y - input[0][2]*z) / input[0][0];

	// ���ʂ̏o��
	printf("X= %lf\nY= %lf\nZ= %lf\n",x,y,z);

}
