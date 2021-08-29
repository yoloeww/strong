# include <stdio.h>
# include <math.h>
int main(void)
{
    double s=1.0,i=2.0,k=2.0,l=2.0,pi=1.5;
	while(pi>0.0001)
	{
	      s=s*10+k;
		  k++;
		  i=i*10+(2l+1);
		  l++;
		  pi=pi+s/i;
	}    
	printf("%lf\n",pi*2);
	return 0;
}