# include<stdio.h>
int main(void)
{
   int i,end,count,n,a[100];
   printf("input people:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   a[i]=i+1;
   end=0;
   i=0;
   count=0;
   while(end<n-1)
   {
	   if(a[i]!=0)
	        count++;
			if(count%3==0)
			{
			   a[i]=0;
			   end++;
			   count=0;
			}
			i++;
	   if(i==n)
		   i=0;
   }
   while(a[i]==0)
	   i++;
   printf("%d",a[i]);
   return 0;
}