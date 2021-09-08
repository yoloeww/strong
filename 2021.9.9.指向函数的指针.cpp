# include<stdio.h>
int main(void)
{
    int max(int,int);
	int (*p)(int,int);
	int a,b,c;
	p=max;
	printf("input a,b:\n");
	scanf("%d%d",&a,&b);
	c=(*p)(a,b);
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
int max(int a,int b)
{

	if(a>b)
		return a;
	else
		return b;
}