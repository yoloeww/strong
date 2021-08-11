# include<stdio.h>
int main(void)
{
    int g,s,b,i;
	for(i=100;i<=999;i++)
	{
	    g=i%10;
		s=i/10%10;
		b=i/100;
		if((g*g*g)+(s*s*s)+(b*b*b)==i)
			printf("%5d",i);
	}
	putchar('\n');
return 0;
}