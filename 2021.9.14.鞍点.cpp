# include<stdio.h>
# define M 3
# define M 3
bool f(int *(a)[M],int i,int j)
{
    for(int x=0;x<M;i++)
	{
	   if(a[x][j]<a[i][j])
		   return false;
	}
	return true;
}
bool f(int *(a)[N],int i,int j)
{
    for(int x=0;x<N;i++)
	{
	   if(a[i][x]<a[i][j])
		   return false;
	}
	return true;
}
int main(void)
{
  
}