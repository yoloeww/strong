# include<stdio.h>
# define M 3
# define N 4
int main(void)
{
	bool f(int a[][M],int i,int j);
	bool g(int a[][N],int i,int j);
        int a[M][N],i,j,flag=0;
		printf("input array:\n");
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				scanf("%d",&a[i][j]);
				for(i=0;i<M;i++)
			for(j=0;j<N;j++)
			{
			   if(f(a,i,j)&&g(a,i,j))
				   flag=1;
			}
  if(flag)
	  printf("%d%d",i,j);
  else 
	  printf("no!");
  return 0;

}
bool f(int a[][M],int i,int j)
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
	  for(x=0;x<M;x++)	  
	  {
		  if(a[i][x]>a[i][j])
			  return false;
	  }
	  return true;
 	}
