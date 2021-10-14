# include<stdio.h>
int main(void)
{
  int i,j,n=0;
  for(i=1;i<=4;i++)
	  for(j=1;j<=5;j++,n++)
	  {
		  if(n%5==0)
			  printf("\n");
		        printf("%5d",i*j);
	  }
				return 0;
}