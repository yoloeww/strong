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
printf("������������:\n");
scanf("%d%d",&a,&b);
sort(&a,&b);
printf("��������С��������Ϊ:%d %d \n",a,b);
return 0;
}