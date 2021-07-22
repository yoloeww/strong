# include<stdio.h>
int main(void)
{

	int a[50]={0};
	int i;
	a[0]=1;
	a[1]=1;
	for(i=2;i<30;i++)
	{
	  a[i]=a[i-2]+a[i-1];
	}
	for(i=0;i<30;i++)
	{
		if(i%5==0)
			putchar('\n');
			printf("%12d",a[i]);
	}
	putchar('\n');
return 0;
}