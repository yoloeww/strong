# include <stdio.h>
# define N 10
int main(void)
{
     int a[N],i,temp;
	 printf("input a array:\n");
	 for(i=0;i<N;i++)
		 scanf("%d",&a[i]);
	 for(i=0;i<N/2;i++)
	 {
		 temp=a[N-i-1];
		 a[N-i-1]=a[i];
		 a[i]=temp;
	 }
	 for(i=0;i<N;i++)
		 printf("%5d",a[i]);
	 return 0;
}