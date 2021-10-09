# include<stdio.h>
int main(void)
{
    int a,b,sum;
	printf("input a and b:\n");
    scanf("%d%d",&a,&b);
	sum=a*b;
	while(a!=b)
	{
	   if(a>b)
		  a=a-b;
	   else
		   b=b-a;
	}
	printf("the max =%d\n",a);
	printf("the min =%d\n",sum/a);
	return 0;
}