# include<stdio.h>
int main(void)
{

	int j,i;
	for(i=101;i<=199;i++)
	{
		for(j=2;j<i;j++)
	{
			if(i%j==0)
				break;
	}
		if(i==j)
			printf("%5d\n",i);
	}
	return 0;
}