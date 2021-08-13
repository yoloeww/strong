# include<stdio.h>
# define N 10
int main(void)
{
    int a[N]={1,8,9,23,2,24,53,21,43,233},i,j,temp;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
		{
		  if(a[j]<a[j+1])
		  {
		       temp=a[j+1];
			   a[j+1]=a[j];
			   a[j]=temp;
		  }
		}
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	putchar('\n');
	return 0;
}