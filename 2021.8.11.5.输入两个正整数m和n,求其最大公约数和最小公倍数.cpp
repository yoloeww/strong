# include<stdio.h>
int main(void)
{
   int a,b;
   printf("input two number:\n");
   scanf("%d%d",&a,&b);
   int sum=a*b;
   while(a!=b)
   {
       if(a>b)
		  a=a-b;
	   if(b>a)
		 b=b-a;
   }
   printf("the least number is %d\n",a);
   printf("the largese is number %d\n",sum/a);
   return 0;
}