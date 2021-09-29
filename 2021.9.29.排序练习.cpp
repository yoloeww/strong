# include<stdio.h>
# define N 10
int main(void)
{
	int temp,min,i,j,a[N];
		for(i=0;i<N;i++)
			scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{ 
		min=i;
		for(j=i+1;j<N;j++)
		{
		   if(a[min]>a[j])
		   {
		        min=j;
		   }
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<N;i++)
			printf("%5d",a[i]);
		return 0;
}