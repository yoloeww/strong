# include<stdio.h>
int main(void)
{
   int a,i,s=0;
   printf("input a:\n");
   scanf("%d",&a);
   for(i=1;i<=a;i=i*10)
   {
       s=a%(10*i)/i+s*10;
   }
   printf("%d\n",s);
   return 0;
}