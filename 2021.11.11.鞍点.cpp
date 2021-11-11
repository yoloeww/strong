# include<stdio.h>
# define M 3
# define N 4
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
  for(x=0;x<N;x++)
  {
     if(a[i][x]>a[i][j])
		 return false;
  }
  return true;
}
int main(void)
{
  int a[M][N];
  int i,j,flag=0;
  for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
	  {
	     if(f(a,i,j)&&g(a,i,j))
			 flag=1;
		     break;
	  }
	  if(flag)
	  printf("%d %d %d",a[i][j],i,j);
	  return 0;

}