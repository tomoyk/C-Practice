#include <stdio.h>

int main(void){

int i,year,month,date;
int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

printf("Input: {Year}.{Month}\n> ");
scanf("%d.%d",&year,&month);

date=( 1 + 13*(month<=2?month+13:month+1)/5 + 5*((month<=2?year-1:year)%100)/4 - 7*((month<=2?year-1:year)/100)/4 )%7;
date=date<0?date+7:date;

printf(" \x1b[31mSun\x1b[39m Mon Tue Wed Thu Fri \x1b[34mSat\x1b[39m\n");
for(i=(date==0?6:date-1);i>0;i--)
  printf("    ");
for(i=1;i<=(month==2&&year%4==0?days[month-1]+1:days[month-1]);i++){
	printf(i%7==(8-date)%7||(date==0&&(i-1)%7==0)?"\x1b[34m":(i%7==(9-date)%7)?"\x1b[31m":"\x1b[39m");
  printf("%4d%s",i,i%7==(8-date)%7||(date==0&&(i-1)%7==0)?"\n":"");
}
printf("\n\x1b[39m");

}
