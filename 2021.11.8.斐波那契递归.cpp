# include<stdio.h>
int fun(int n)
{
    if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else
		return fun(n-1)+fun(n-2);
}
int main(void)
{ 
	int n;
	printf("input a number:\n");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		printf("%5d",fun(i));
	return 0;
     
}