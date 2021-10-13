# include<stdio.h>
int main(void)
{
    int i,m,j,sum;
	for(i=2;i<1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum+=j;
		}
			if(sum==i)
			{
				printf("%d factors is",sum);
			for(m=1;m<sum;m++)
			{
			  if(sum%m==0)
				  printf("%5d",m);
			}
				printf("\n");
			}
		
	}
	return 0;
   
}