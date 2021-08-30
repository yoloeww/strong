# include<stdio.h>
void sort(int *a,int *b)
{
	int t;
if(*a>*b)
{
   t=*b;
*b=*a;
*a=t;
}
}
int main(void)
{
int a,b;
printf("请输入两个数:\n");
scanf("%d%d",&a,&b);
sort(&a,&b);
printf("三个数由小到大排列为:%d %d \n",a,b);
return 0;
}