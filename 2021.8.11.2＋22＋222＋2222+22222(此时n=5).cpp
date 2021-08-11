# include<stdio.h>
int main(void)
{
   int a,n,s=0,k=0,i;
   printf("input n:\n");
   scanf("%d",&n);
   scanf("%d",&a);
   for(i=0;i<n;i++)
   {
      k=k+a;
	  a=a*10;
	  s=s+k;
   }
printf("sum=%d\n",s);
return 0;
}