# include<stdio.h>
int main(void)
{
   int i,k,j,s;
   for(i=2;i<1000;i++)
   {  
	   s=0;     //要注意 每次都要清零
	   for(j=1;j<i;j++)
	   {
		   if(i%j==0)
			   s=s+j;
	   }
		   if(s==i)
		   {
			   printf("%d its factors are:",i);
		       for(k=1;k<i;k++)
			   if(i%k==0)
			   printf("%5d",k);
			   putchar('\n');
		   }
   }
   return 0;
}