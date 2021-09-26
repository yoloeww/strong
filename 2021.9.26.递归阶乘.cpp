# include<stdio.h>
int f(int n)
{
	int p;
   if(n==0)
	   p=1;
    else
	   p=n*f(n-1);
	   return p;
}
int main(void)
{
	int n;
	printf("input n:\n");
	scanf("%d",&n);
	printf("%d!=%d\n",n,f(n));
	return 0;
}