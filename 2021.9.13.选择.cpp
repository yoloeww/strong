# include<stdio.h>
# define N 10
int main(void)
{
	int a[N]={1,98,21,42,5,23,15,532,232,2},i,j,max,temp;
	for(i=0;i<N-1;i++)
	{
		max=0;
	  for(j=1;j<N-i;j++)
		  if(a[max]<a[j])
		  {
			  max=j;
		  }
		  temp=a[max];
		  a[max]=a[j-1];
		  a[j-1]=temp;
		  }
  	for(i=0;i<N;i++)
		printf("%5d",a[i]);
}