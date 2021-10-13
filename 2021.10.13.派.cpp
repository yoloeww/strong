# include<stdio.h>
int main(void)
{
     float k,a=2,b=1,sum=0;
	 int i;
	 for(i=0;i<20;i++)
	 {
	     k=a/b;
		 sum+=k;
		 b=a;
		 a=a+b;
	 }
	 printf("%f",sum);
 return 0;
}
