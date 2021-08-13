# include<stdio.h>
# define N 7
void fun(int *a,int n,int index)
{
	int i,b;
	for(i=0;i<n;i++)    //1 2 3 4 5 6 9 10
		               //          N-n
	{
	   b=a[index];
	   a[index]=a[index-1];
	   a[index-1]=b;
	   index--;
	}
}
int main(void)
{
   int a[N],i,n;
   printf("input number:\n");
   for(i=0;i<N;i++)
	   scanf("%d",&a[i]);
   printf("remove place:\n");
   scanf("%d",&n);
   for(i=N-n;i<N;i++)
	   fun(a,N-n,i);
   for(i=0;i<N;i++)
   printf("%5d",a[i]);
   putchar('\n');
   return 0;
}