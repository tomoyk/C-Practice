#include <stdio.h>

int main(void){

int i,year,month,date;
int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

//int j=2010;
//while(j<=2015){

printf("Input: {Year}.{Month}\n> ");
scanf("%d.%d",&year,&month);
//month=2;
//year=j;

date=( 1 + 13*(month<=2?month+13:month+1)/5 + 5*((month<=2?year-1:year)%100)/4 - 7*((month<=2?year-1:year)/100)/4 )%7;
date=date<0?date+7:date;

// printf("month: %d\n",month);
// printf("date: %d\n",date);

printf(" Sun Mon Tue Wed Thu Fri Sat\n");
for(i=(date==0?6:date-1);i>0;i--)
  printf("    ");
for(i=1;i<=(month==2&&year%4==0?days[month-1]+1:days[month-1]);i++)
  printf("%4d%s",i,i%7==(8-date)%7||(date==0&&(i-1)%7==0)?"\n":"");
printf("\n");

//j++;
//}

}
