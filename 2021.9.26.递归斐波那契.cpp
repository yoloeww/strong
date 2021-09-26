# include<stdio.h>
int f(int n)
{
     if(n==1)
		 return 1;
	 else if(n==2)  return 1;
	 else
		 return f(n-1)+f(n-2);
}
int main(void)
{

    int n;
	printf("how:\n");
	scanf("%d",&n);
	printf("µÚ%d=%d\n",n,f(n));
	return 0;
}