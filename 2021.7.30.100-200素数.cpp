# include<stdio.h>
int main(void)
{
   int i,j,m=0;
   for(i=100;i<=200;i++)
   {
	   for(j=2;j<200;j++)
	   {
		   if(i%j==0)
			  break;
	   }
	   if(j==i) 
	   {
		   m++;
		   printf("%5d",i);
	   }
   }
   printf("����%d������\n",m);
   return 0;
}