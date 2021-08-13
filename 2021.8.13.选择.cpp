# include<stdio.h>
# define N 10
int main(void)
{
	int i,j,temp,max;
	int a[N]={1,2,5,3,7,78,92,45,23,14};
	for(i=0;i<N-1;i++)
	{
	    max=0;
		for(j=1;j<N-i;j++)
		{
		    if(a[j]>a[max])
				max=j;
		}
     	temp=a[j-1];
		a[j-1]=a[max];
		a[max]=temp;
	}
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	putchar('\n');
	return 0;

}