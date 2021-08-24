# include<stdio.h>
float p(int n,float x)
{
   if(n==0)
	   return 1;
   else if(n==1)
	   return x;
   else
	   return (2*n-1)*x*p((n-1),x)-(n-1)*p((n-2),x)/n;
}
int main(void)
{
         float x;
		 int n;
		 printf("input n & x:\n");
		 scanf("%d%f",&n,&x);
		 printf("P%d(%d)=%6.2f\n",n,int(x),p(n,x));
		 return 0;
} 