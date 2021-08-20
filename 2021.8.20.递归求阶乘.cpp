# include<stdio.h>
int muni(int a)
{
   if(a==1||a==0)
	   a=1;
   else if (a>1)
	   a=a*muni(a-1);
   else
	   a=-1;
   return a;
}
int main(void)
{
       printf("%d",muni(5));
	   putchar('\n');
	   return 0;
}
