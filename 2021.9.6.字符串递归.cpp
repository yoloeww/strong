# include<stdio.h>
int main(void)
{
   void convert(int n);
   int number;
   printf("input a number:\n");
   scanf("%d",&number);
   if(number<0)
   {
      putchar('-');
	  putchar(' ');
	  number=-number;
   }
   convert(number);
   putchar(32);
   return 0;
}
void convert(int n)
{
    int i;
	if((i=n/10)!=0)
		convert(i);
	putchar(n%10+'0');
	putchar(32);
}