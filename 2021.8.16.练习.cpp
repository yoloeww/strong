# include<stdio.h>
int main(void)
{
	char t=0,a[6]={'a','b','c','d','e','f'};
	int i;
	for(i=0;i<5;i++)
	{
	    t=a[5-i-1];
		a[5-i-1]=a[5-i];
		a[5-i]=t;
	}
	a[i+1]='\0';
	puts(a);
	return 0;
}