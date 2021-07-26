# include<stdio.h>
struct dater
{
     int year;
	 int month;
	 int day;
}date;
int main(void)
{
 int i,days;
 int daytab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 printf("请输入年月日:\n");
 scanf("%d%d%d",&date.year,&date.month,&date.day);
 days=0;
 for(i=1;i<date.month;i++)
 {
       days=days+daytab[i];
 }
 days+=date.day;
 if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3)
	 days+=1;
 printf("%d年%d月%d日为该年的第%d天\n",date.year,date.month,date.day,days);
 return 0;
}