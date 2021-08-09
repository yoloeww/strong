# include<stdio.h>
# define M 3
# define N 4
int main(void)
{
   int a[M][N];
   int i,j,k,max,min,flag=1;
   printf("input members :\n");
   for(i=0;i<M;i++)
	   for(j=0;j<N;j++)
		   scanf("%d",&a[i][j]);
	   for(i=0;i<M;i++)
	   { 
		   max=a[0][j];
		   min=0;
		   for(j=0;j<N;j++)
			   if(max<a[i][j])
			   {
			       max=a[i][j];
				   min=j;
			   }
			   flag=1;
			   for(k=0;k<M;k++)
				   if(max>a[k][min])
			   {
					   flag=0;
					   continue;
			      
			   }
				   if(flag)
				   {
				      printf("a[%d][%d]=%d\n",i,min,max);
					  break;
				   }
	   }
	    if(flag==0)
			printf("no\n");
		return 0;
}
