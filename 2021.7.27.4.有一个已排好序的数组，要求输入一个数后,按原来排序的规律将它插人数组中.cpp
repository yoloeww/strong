# include<stdio.h>
# define N 4
int main(void)
{

	int a[N]={1,8,10,38};
	int n,t=0,i,j;
	printf("请输入一个数:\n");
	scanf("%d",&n);
	for(i=0;i<N;i++)
	{
		if(a[i]>n)
			break;
	}
	for(j=N-1;j>=i;j--)
	{
			a[j+1]=a[j];
	}
		a[i]=n;

	printf("the new array is \n");
		for(i=0;i<N+1;i++)
			printf("%5d",a[i]);
		putchar('\n');
  return 0;	
}