# include<stdio.h>
# define N 5
int main(void)
{
	int a[N],i,j,max,temp;
	printf("input number:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		max=0;
		for(j=1;j<N-i;j++)
		{
			if(a[max]<a[j])
				max=j;
		}
			temp=a[max];
			a[max]=a[j-1];
			a[j-1]=temp;
	}
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	return 0;
}