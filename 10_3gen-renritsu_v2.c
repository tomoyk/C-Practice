#include <stdio.h>

// 設定系
#define INPUT_SKIP 1 // 手入力の有無
#define DEBUG 0 // デバッグの有無

int main(void){

	double num,z,y,x;
	int i,j,k,waru;

	double input[3][4] =	{{ 2, -1,  1,   5},
												 { 4, -1, -5, -12},
												 { 2,  3, -2,  -8}};

	if(INPUT_SKIP==1) goto SKIP_INPUT;

	// 入力処理
	printf("ax+by+cz=d\n");
	for(i=0;i<3;i++){
		printf("- - - 式%d - - -\n",i+1);
		for(j=0;j<4;j++){
			// printf("%s=",(j==0 ? "a" : (j==1 ? "b" : (j==2 ? "c" : "d")) ));
			printf("[%d][%d] ",i,j);

			scanf("%lf",&input[i][j]);
		}
	}

	SKIP_INPUT:

	// 演算処理
	for(k=0;k<3;k++){
		num = input[k][k];
		
		if(DEBUG==1) printf("num= %lf\n係数を1にする\n",num);

		// 式0,1,2のx,y,zの係数を1にする
		for(j=0;j<4;j++){
			if(DEBUG==1) printf("%lf / %lf = %lf \n",input[k][j],num,input[k][j]/num);
			input[k][j] /= num;
		}

		for(j=k+1;j<3;j++){ // Xの係数を片付ける

			// 式0をN倍する
			waru = int(input[j][k] / input[k][k]);
			if(DEBUG==1) printf("waru: [%d][%d]%lf / [%d][%d]%lf =%d\n",j,k,input[j][k],k,k,input[k][k],waru);

			// 式0と式jを比較して差をとる
			for(i=k;i<4;i++){
				if(DEBUG==1) printf("sabun: [%d][%d]%lf - %d * [%d][%d]%lf = %lf \n",j,i,input[j][i],waru,k,i,input[k][i], input[j][i] - waru * input[k][i] );
				input[j][i] = input[j][i] - waru * input[k][i];
			}

		}
		
		if(DEBUG==0) continue;
		
		// デバッグ用の出力
		for(j=0;j<3;j++){
			for(i=0;i<4;i++){
				printf("result: [%d][%d] %lf\n",j,i,input[j][i]);
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
