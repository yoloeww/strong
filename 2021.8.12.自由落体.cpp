# include<stdio.h>
int main(void)
{
    double hn=100,sn=50;
	int i;
	for(i=2;i<=10;i++)
	{
	   hn=hn+2*sn;
	   sn=sn/2;
	}
	printf("%lf%lf",hn,sn);
	return 0;
}