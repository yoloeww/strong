# include<stdio.h>
int main(void)
{
   int a,b,c,max;
   printf("input a b c:\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
	   max=a;
   else
	   max=b;
   if(max>c)
	   ;
   else
	   max=c;
   printf("max=%d\n",max);
   return 0;
}