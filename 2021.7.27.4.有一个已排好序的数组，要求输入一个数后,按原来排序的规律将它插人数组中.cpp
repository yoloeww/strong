# include<stdio.h>
# define N 4
int main(void)
{

	int a[N]={1,8,10};
	int n,t=0,i,j;
	printf("请输入一个数:\n");
	scanf("%d",&n);
		if(n>a[N])
			a[N]=n;
		else
		{
	for(i=0;i<N-1;i++)
	{
	  if(a[i]>n)
	  {
	     t=a[i];
		 a[i]=n;
	  }
	  for(j=i+1;j<N;j++)
	  {
	      int t2=a[j];
		  a[j]=t;
		  t=t2;
	  }
	  break;
	}
		}
		printf("the new array is \n");
		for(i=0;i<N;i++)
			printf("%d",a[i]);
  return 0;	
}