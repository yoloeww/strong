# include<stdio.h>
# define M 4
# define N 5
int main(void)
{
  int a[M][N];
  int i,j,min,max,flag;
  printf("ÇëÊäÈë%dx%dµÄ¾ØÕó:\n",M,N);
  for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
		  scanf("%d",&a[i][j]);
	  for(i=0;i<M;i++)
	  {   max=a[0][j];
	       min=0;
		  for(j=0;j<N;j++)
			  if(max<a[i][j])
			  {
			      max=a[i][j];
				  min=j;
			  }
			  flag=1;
			  for(int k=0;k<M;k++)
				  if(max>a[k][min])
				  {
				    flag=0;
					continue;
				  }
				  if(flag)
				  {
                  printf("a[%d][%d]=%d\N",i,min,max);
				  break;
				  }
}
	  if(flag==0)
		  printf("it is not exist\n");
	  return 0;
} 