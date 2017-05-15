#include <stdio.h>
#include <stdlib.h>

int main(void){

srand(10);
int i;
for(i=0;i<=6000;i++)
	printf("\x1b[4%dm ",i==6000?9:rand()%7);

}