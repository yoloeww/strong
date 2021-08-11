# include<stdio.h>
int main(void)
{ 
	int i;
   double a=2,b=1,t,s=0;   //2/1+3/2+5/3
   for(i=1;i<=20;i++)
   {
	   s=s+a/b;
	   t=a;
       a=a+b;
	   b=t;
   }
  printf("sum=%16.10lf\n",s);
  return 0;
}