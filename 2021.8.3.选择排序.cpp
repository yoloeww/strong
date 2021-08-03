# include<stdio.h>
# define n 3
int main(void)
{
   
	int i,j,t,max;
	int a[n];
	printf("ÇëÊäÈë%d¸öÊı:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	      max=0;
		  for(j=1;j<n-i;j++)
		  {
		     if(a[max]>a[j])
				 max=j;
		  }
		  t=a[max];
		  a[max]=a[j-1];
		  a[j-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
