# include<stdio.h>
# define N 10
int main(void)
{
   int temp,i,j,a[N],max;
   printf("input number:\n");
   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<N-1;i++)
   {
      max=i;
	   for(j=i+1;j<N;j++)
	   {
	      if(a[j]>a[max])
			  max=j;
	   }
	   temp=a[max];
	   a[max]=a[i];
	   a[i]=temp;
   }
  for(i=0;i<N;i++)
	  printf("%5d",a[i]);
  return 0;
}
