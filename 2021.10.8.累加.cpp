# include<stdio.h>
int main(void)
{
   int sign=1;
   double n=1,s=1,t=2;
   while(n<=100)
   {
       sign=-sign;
	   t=sign/n;
       s=s+t;
	   n=n+1;
   }
   printf("%f",s);
   return 0;
}