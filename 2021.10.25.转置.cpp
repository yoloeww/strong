# include<stdio.h>
# define M 3
int main(void)
{
	int a[M][M];
    int i,j,temp;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
   for(i=0;i<M;i++)
	   for(j=i+1;j<M;j++)
	   {
	        temp=a[j][i];
			a[j][i]=a[i][j];
			a[i][j]=temp;
	   }
	   for(i=0;i<M;i++)
	   {
	   for(j=0;j<M;j++)
	   {
		   printf("%5d",a[i][j]);
	   }
	       putchar('\n');
	   }
	   return 0;
}
