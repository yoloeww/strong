# include<stdio.h>
# define N 3
int main(void)
{
   int a[N],i,j,k,term;
   printf("input number:\n");
   for(i=0;i<N;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<N-1;i++)
   {
      k=0;
	  for(j=1;j<N-i;j++)
		  if(a[k]<a[j])
		  {
			  k=j;
		  }
	   term=a[j-1];
	   a[j-1]=a[k];
	   a[k]=term;

   }
for(i=0;i<N;i++)
printf("%d\n",a[i]);
return 0;
}