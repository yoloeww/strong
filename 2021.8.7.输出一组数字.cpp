# include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++)
		{
			printf("%5d",i*j);
		     if(j%5==0)
				 putchar('\n');
		}
			 return 0;

   
}