# include<stdio.h>
int main(void)
{
   int i;
   float s=0,a=2,b=1,t=0;
   for(i=0;i<=20;i++)
   {
        s+=a/b;
		t=a;
		a=a+b;
		b=t;
   }
   printf("s=%f\n",s);
   return 0;
}