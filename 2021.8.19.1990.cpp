# include<stdio.h>
void fun (char *a)
{
   int i;
   for(i=3;i>=0;i--)
   {
       a[i*2+1]=a[i];
	   a[i*2]=' ';
   }
}
int main(void)
{
   char a[8],i;
   printf("number:\n");
   for(i=0;i<4;i++)
	   scanf("%c",&a[i]);
   fun(a);
   for(i=0;i<8;i++)
	   printf("%c",a[i]);
   return 0;
}