# include<stdio.h>
int fa(int n)
{
   int f;
   if(n==1)
	  f=1;
   else if(n==2)
	  f=2;
   else
	   f=fa(n-1)+fa(n-2);
   return f;
}
int main(void)
{
	int n;
	printf("input n:\n");
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	printf("%d",fa(n));
	return 0;
}