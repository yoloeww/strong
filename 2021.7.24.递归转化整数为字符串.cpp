# include<stdio.h>
void convert (int n)
{
   int i;
   if((i=n/10)!=0)
	   convert (i);
   putchar(n%10+'0');
   putchar(32);
}
int main(void)
{
  int n;
  printf("������һ������n:\n");
  scanf("%d",&n);
  if(n<0)
  {
     putchar('-');
	 putchar(' ');
	 n=-n;
  }
  convert(n)
;
printf("\n");
return 0;
}