# include<stdio.h>
int largest(int m,int n)
{
	while(m!=n)
	{
     if(m>n)
		 m=m-n;
	 else
		 n=n-m;
	}
	return m;
}
int small(int m,int n)
{
     return m/n;
}
int main(void)
{
    int t,m,n,sum=0;
	printf("input two number:\n");
	scanf("%d%d",&m,&n);
	sum=m*n;
	t=largest(m,n);
	printf("the big is %d\n",t);
	printf("the small is %d\n",small(sum,t));
	putchar('\n');
	return 0;
}
