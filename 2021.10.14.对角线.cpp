# include<stdio.h>
# define N 3
# define N 3
int main(void)
{
  int a[N][N],i,j,sum=0;
  printf("input number:\n");
  for(i=0;i<N;i++)
	  for(j=0;i<N;j++)
		  scanf("%d",&a[i][j]);
	  for(i=0;i<N;i++)
	  for(j=0;i<N;j++)
		  sum+=a[i][i];
	  printf("%d",sum);
	  return 0;

}