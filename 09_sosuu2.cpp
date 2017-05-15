#include <stdio.h>

int func(int a,int b){
	
	// Ä‹Nˆ—(Š„‚èØ‚ê‚éê‡)
	if(a%b==0) {
		//  printf("\ndebug:: a=%d b=%d \n",a,b);
		printf("%d%s", b, (a!=b) ? "*" : "" );
		return func(a/b,b);
	}

	// Š„‚ê‚é‚¾‚¯Š„‚Á‚½Œã or Å‰‚©‚çŠ„‚èØ‚ê‚È‚¢
	return a;
}

int main(void){

	// •Ï”‚ÌéŒ¾E“ü—Í
	int num,i,ans;
	printf("‘fˆö”•ª‰ğ‚·‚é”š‚ğ“ü—Í: ");
	scanf("%d",&num);
	printf("%d=",num);
	
	// Ä‹Nˆ—‚ÌŒJ‚è•Ô‚µ
	for(i=2;num!=1;i++){
		if(i!=2 && i%2==0) i++;
		num = func(num,i);
	}
}
