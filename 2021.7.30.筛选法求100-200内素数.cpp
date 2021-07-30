# include<stdio.h>
# include<math.h>
int main(void)
{
   int a[201];
   int i,j,m=0;
   for(i=100;i<=200;i++)
	   a[i]=i;
   for(i=2;i<sqrt(200);i++)
   {
	   for(j=100;j<=200;j++)
		   if(a[j]%i==0)
			   a[j]=0;
   }
   for(i=100;i<=200;i++)
   {
	   if(a[i]!=0)
	   {
		   m++;
         printf("%4d",a[i]);
	   }
	   if(m%10==0)
		   putchar('\n');
   }
   putchar('\n');
   printf("100-200之间有%d个素数",m);
   return 0;

}