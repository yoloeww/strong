# include<stdio.h>
# define N 3
int main(void)
{
    int a[N][N]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		   if(i+j==2)
			   sum=sum+a[i][j];
		}
	}
		printf("sum=%d",sum);
		putchar('\n');
		return 0;
}