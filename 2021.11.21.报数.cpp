# include<stdio.h>
int main(void)
{
   int i,end,count,a[100],n;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    a[i]=i+1;
   i=0;
   count=0;
   end=0;
   while(end<n-1)
   {
         if(a[i]!=0)
			 count++;
		 if(count%3==0)
		 {
			 a[i]=0;
			 count=0;
			 end++;
		 }
	     i++;
		 if(i==n)
			 i=0;
   }
   for(i=0;i<n;i++)
   {
   while(a[i]!=0)
	   break;
   }
   printf("ÁôÏÂ%d\n",i);
   return 0;

}