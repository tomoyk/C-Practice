#include <stdio.h>
#include <math.h>
void main(){
	/* 入力処理 */
	int many,data[100],sum=0,tmp=0;
	printf("データ数: ");
	scanf("%d", &many);
	for(int i=0;i<many;i++){
		printf("データ[%d] ",i+1);
		scanf("%d",&data[i]);
		sum += data[i];
	}
	/* 出力処理 */
	printf("合計 %d\n",sum);
	int ave = sum/many;
	printf("平均 %d\n",ave);
	for(int i=0;i<many;i++){
		tmp +=  (data[i]-ave)*(data[i]-ave);
	}
	float result = tmp / many;
	printf("分散 %f\n",sqrt(result));
}