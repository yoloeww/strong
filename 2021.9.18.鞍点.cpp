# include<stdio.h>
# define M 4
# define N 3
int main(void)
{
    bool f(int a[][N],int i,int j);
	bool g(int a[][N],int i,int j);
	int i,j,a[M][N],flag=0;
	printf("input number:\n");
               for(i=0;i<M;i++)
                   for(j=0;j<N;j++)
                     scanf("%d",&a[i][j]);
 for(i=0;i<M;i++)
 {
    for(j=0;j<N;j++)
{
   if(f(a,i,j)&&g(a,i,j))
   {
   printf("a[%d] [%d]=%d\n",i,j,a[i][j]);
   flag =1;
   }
    
}
 }
if(flag==0)
printf("not have\n");
return 0;
}
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