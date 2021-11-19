# include<stdio.h>
# define M 10
int main(void)
{
   int a[M],i,j,temp,max;
   printf("«Î ‰»Î ˝◊÷:\n");
   for(i=0;i<M;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<M-1;i++)
   {
       max=i;
	   for(j=i+1;j<M;j++)
	   {
	      if(a[j]>a[max])
			  max=j;
	   }
	   if(i!=j)
	   {
	      temp=a[max];
		  a[max]=a[i];
		  a[i]=temp;
	   }
   }
   for(i=0;i<M;i++)
	  printf("%5d",a[i]);
   return 0;
}