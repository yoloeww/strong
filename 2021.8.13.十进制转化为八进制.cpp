# include<stdio.h>
int main(void)
{
	int n,i=0,j,a[20];
   printf("input a number:\n");
   scanf("%d",&n);
do
 {
	 a[i]=n%8;
	 n=n/8;
	 i++;
 }while(n!=0);
   for(j=i-1;j>=0;j--)
	   printf("%d",a[j]);
   putchar('\n');
   return 0;
}