# include<stdio.h>
int main(void)
{
   int a[100],i,n;
   a[0]=1;
   a[1]=1;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   { 
      a[i]=a[i-1]+a[i-2];
   } 
   for(i=0;i<n;i++)
   { 
	   if(i%5==0)
		   printf("\n");
	    printf("%5d",a[i]);
   } 
   printf("\n");
   return 0;
}