# include<stdio.h>
# define M 3
# define N 4
bool f(int a[][N],int i,int j)
{
	int x=0;
    for(x=0;x<N;x++)
	{
	    if(a[x][j]<a[i][j])
			return false;
	}
	return true;
}
bool g(int a[][N],int i,int j)
{
    int x=0;
	for(x=0;x<M;x++)
	{
	   if(a[i][x]>a[i][j])
		   return false;
	}
	return true;
} 
int main(void)
{
     int a[M][N],i,j,leap=0;
	 	 for(i=0;i<M;i++)
		 for(j=0;j<N;j++)
			 scanf("%d",&a[i][j]);
	 for(i=0;i<M;i++)
		 for(j=0;j<N;j++)
			 if(f(a,i,j)&&g(a,i,j))
			 {
				 printf("a[%d][%d]=%d of a\n",i,j,a[i][j]);
			       leap=1;
			 }
			 if(leap==0)
				 printf("error\n");
			 return 0;
}