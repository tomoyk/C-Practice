#include <stdio.h>

int main(void){

	// 変数の宣言
	double num,z,y,x,input[3][4];
	int i,j,k,waru;

	// 入力処理
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			// printf("%s=",(j==0 ? "a" : (j==1 ? "b" : (j==2 ? "c" : "d")) ));
			printf("[%d][%d] ",i,j);

			scanf("%lf",&input[i][j]);
		}
	}

	// 演算処理
	for(k=0;k<3;k++){
		num = input[k][k];
		
		// 式0,1,2のx,y,zの係数を1にする
		for(j=0;j<4;j++){
			input[k][j] /= num;
		}

		for(j=k+1;j<3;j++){ // Xの係数を片付ける

			// 式0をN倍する
			waru = int(input[j][k] / input[k][k]);

			// 式0と式jを比較して差をとる
			for(i=k;i<4;i++){
				input[j][i] = input[j][i] - waru * input[k][i];
			}

		}
	}

	// 変数へ代入
	z = input[2][3] / input[2][2];
	y = (input[1][3] - input[1][2]*z) / input[1][1];
  x = (input[0][3] - input[0][1]*y - input[0][2]*z) / input[0][0];

	// 結果の出力
	printf("X= %lf\nY= %lf\nZ= %lf\n",x,y,z);

}
