# include<stdio.h>
int main(void)
{
   int s=0,a,i,n,t=0;
   printf("input a number:\n");
   scanf("%d%d",&a,&n);
   for(i=0;i<n;i++)
   {
       t=a+t;
	   s+=t;
	   a=a*10;
   }
   printf("s=%d\n",s);
   return 0;
}