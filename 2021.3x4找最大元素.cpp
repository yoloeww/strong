# include<stdio.h>
# define M 3
# define N 4
int main(void)
{
     int i,j,max,colum,row,a[M][N];
	 printf("input 3x4 array:\n");
     for(i=0;i<M;i++)
		 for(j=0;j<N;j++)
		   scanf("%d",&a[i][j]);
	 max=a[0][0];
	  for(i=0;i<M;i++)
		 for(j=0;j<N;j++)
		 {
			 if(max<a[i][j])
			 {
			    max=a[i][j];
				colum=i;
				row=j;
			 }
		 }
		 printf("the max number is %d\ncolum is %d \nrow is %d \n",max,colum,row);
		 return 0;
}
