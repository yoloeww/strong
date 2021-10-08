# include<stdio.h>
int main(void)
{
	int n=0,s,i;
	printf("input a number:\n");
	scanf("%d",&s);
	for(i=1;i<=s;i=i*10)
	{
	      n=s%(i*10)/i+n*10;
	}
	printf("riverse is %d",n);
	return 0;
}