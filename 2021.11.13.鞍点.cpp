# include<stdio.h>
# define M 3
# define N 4
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
	int i,j;
  int a[M][N];
   for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
		  scanf("%d",&a[i][j]);
  int flag=0;
  for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
	  {
	     if(f(a,i,j)&&g(a,i,j))
		 {
			 flag=1;
			 printf("%d \n%d %d",a[i][j],i,j);
		 }
	  }
	  
	  if(flag==0)
		  printf("нч\n");return 0;

}