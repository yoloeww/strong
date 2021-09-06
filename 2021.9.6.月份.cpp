# include<stdio.h>
int main(void)
{
	int sums(int month,int day);
	int leap(int year);
	int year,month,day,days;
	printf("input date:\n");
    scanf("%d%d%d",&year,&month,&day);
	days=sums(month,day);
	if(leap(year)&&month>=3)
		days=days+1;
	printf("%d/%d/%d is %d of the year:\n",year,month,day,days);
	return 0;
}
int sums(int month,int day)
{
	int i,dayp[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<month;i++)
		day=day+dayp[i];
	return day;
}
int leap(int year)
{
   if(year%4==0&&year%100!=0||year%400==0)
	   return 1;
   else
	   return 0;
}
