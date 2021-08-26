# include<stdio.h>
# define N 20
void fun(int *a,int *b)
{
   int p;
   p=*b;
   *b=*a;
   *a=p;
}
int main(void)
{
	int a[N],n,i,j;
printf("want number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		fun(&a[i],&a[n-i-1]);
	}
	printf("the order is :\n");
	for(j=0;j<n;j++)
	{
	printf("%d\n",a[j]);
	}
	return 0;
}