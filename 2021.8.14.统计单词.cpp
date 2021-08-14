# include<stdio.h>
int main(void)
{
	char a[80]={"33"},b[90]={'s'};
	printf("%s",a);
   //	puts(a),puts(b);
	putchar(a[0]),putchar(b[0]);
	return 0;
}