# include<stdio.h>
int sumday(int month,int day)
{
	int dayt[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
	{
	   day+=dayt[i];
	}
	return(day);
}
int leap(int year)
{
  if(year%4==0&&year%100!=0||year%400==0)
	  return 1;
  else
	  return 0;
}
int main(void)
{
   int day,month,year,days;
   printf("请输入年月日:\n");
   scanf("%d%d%d",&year,&month,&day);
   printf("%d/%d/%d",year,month,day);
   days=sumday(month,day);
   if(leap(year)==1&&month>=3)
   days=days+1;
   printf("这天是这一年的第 %d 天\n",days);
   return 0;
}