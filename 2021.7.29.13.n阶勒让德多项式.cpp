# include<stdio.h>
float fun(int n,int x)
{
    if(n==0)
		return (1);
	else if(n==1)
		return (x);
	else
		return(2*n-1)*x*fun((n-1),x)-(n-1)*fun((n-2),x)/n;
}
int main(void)
{
   int x,n;
   printf("input  n and x:\n");
   scanf("%d%d",&n,&x);
   printf("fun%d(%d)=%6.2f\n",n,x,fun(n,x));
   return 0;
}