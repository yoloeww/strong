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
 printf("������������:\n");
 scanf("%d%d%d",&date.year,&date.month,&date.day);
 days=0;
 for(i=1;i<date.month;i++)
 {
       days=days+daytab[i];
 }
 days+=date.day;
 if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3)
	 days+=1;
 printf("%d��%d��%d��Ϊ����ĵ�%d��\n",date.year,date.month,date.day,days);
 return 0;
}