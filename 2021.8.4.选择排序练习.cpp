# include<stdio.h>
# define N 3
int main(void)
{
  int a[N];
  int i,j,temp,max;
  printf("input number:\n");
  for(i=0;i<N;i++)
	  scanf("%d",&a[i]);
  for(i=0;i<N-1;i++)
  {
      max=0;
	  for(j=1;j<N-i;j++)
	  {
		   if(a[j]>a[max])
			   max=j;
	  }
	  temp=a[j-1];
	  a[j-1]=a[max];
	  a[max]=temp;
  }
  for(i=0;i<N;i++)
	  printf("%5d\n",a[i]);
  return 0;
}