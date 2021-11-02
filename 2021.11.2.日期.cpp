# include<stdio.h>
struct dat
{
	int year;
	int day;
	int month;
}date;
int main(void)
{
	printf("input date:\n");
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum=0;
	for(i=1;i<date.month;i++)
	{
	   sum=sum+days[i];
	}
	if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.year>3)
		sum=sum+1;
	printf("the day is %d\n",sum);
	return 0;
}