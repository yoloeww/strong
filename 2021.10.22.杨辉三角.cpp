# include<stdio.h>
# define M 10
int main(void)
{
    int a[M][M],i,j;
	for(i=0;i<M;i++)		
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<M;i++)
		for(j=1;j<=i-1;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	for(i=0;i<M;i++)		
	{
			for(j=0;j<=i;j++)
			{
				printf("%5d",a[i][j]);
			}
				printf("\n");
	}
	return 0;
}