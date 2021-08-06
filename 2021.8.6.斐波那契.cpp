# include<stdio.h>
int main(void)
{
    int a[40]={0},i;
	a[1]=1;
	a[2]=1;
	for(i=3;i<=40;i++)
	{
	   a[i]=a[i-1]+a[i-2];
	}
	for(i=1;i<=40;i++)
	{
		   printf("%10d",a[i]);
		   if(i%4==0)
			   putchar('\n');
	}
	return 0;
}