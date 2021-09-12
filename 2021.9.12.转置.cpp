# include<stdio.h>
# define N 3
int main(void)
{ 
	void fun(int a[][N]);
		int a[N][N],i,j;
	printf("input number:\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
	scanf("%d",&a[i][j]);
	fun(a);
	printf("now is :\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
	printf("%5d",a[i][j]);
		printf("\n");
	}
    return 0;
}
void fun(int a[][N])
{
   int i,j,temp;
   for(i=0;i<N;i++)
	   for(j=i+1;j<N;j++)
	   {
	        temp=a[i][j];
			a[i][j]=a[j][i];
	        a[j][i]=temp;
	   }

}
