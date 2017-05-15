#include <stdio.h>

int main(void){
	int i,ans=1,cnt;
	printf("ŠKæ‚ğ‹‚ß‚é”: ");
	scanf("%d",&cnt);
	printf("%d!„ ",cnt);
	for(i=1;i<=cnt;ans*=cnt--){
		printf("%d",cnt);
		if(i<cnt) printf("~",cnt);
	}
	printf("=%d\n",ans);
	return 0;
}