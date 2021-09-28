# include<stdio.h>
# define M 2
# define N 2
bool f(int a[][N],int i,int j)
{
       int x;
	   for(x=0;x<M;x++)
	   {
		   if(a[x][j]<a[i][j])
			   return false;
	   }
	   return true;
}
bool g(int a[][N],int i,int j)
{
       int x;
	   for(x=0;x<N;x++)
	   {
		   if(a[i][x]>a[i][j])
			   return false;
	   }
	   return true;
}
int main(void)
{ 
	int a[M][N],flag=0,i,j;
	printf("array:\n");
		for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
		    if(f(a,i,j)&&g(a,i,j))
			{
				flag=1;
			printf("%d of 行:%d 列:%d",a[i][j],i,j);
			}
		}
    printf("eror\n");
	return 0;

  
}
