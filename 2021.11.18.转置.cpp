# include<stdio.h>
# define N 3
# define M 3
int main(void)
{
   int a[N][N];
   int i,j,temp;
   printf("请输入3x3的数组\n");
   for(i=0;i<N;i++)
	   for(j=0;j<N;j++)
		    scanf("%d",&a[i][j]);
	   for(i=0;i<N;i++)
		   for(j=i+1;j<N;j++)
		   {
		      temp=a[i][j];
			  a[i][j]=a[j][i];
			  a[j][i]=temp;
		   }

for(i=0;i<N;i++)
{
	   for(j=0;j<N;j++)
		    printf("%5d",a[i][j]);
	   printf("\n");
}
	   return 0; 

}