# include<stdio.h>
int main(void)
{
    int prime,i,j;
	printf("input a number:\n");
	scanf("%d",&prime);
	for(i=2;i<prime;i++)
	{
	   if(prime%i==0)
	   {
		   printf("not!\n");
	       break;
	   }
	}
	  if(prime==i)
		   printf("yes!\n");
	return 0;
}