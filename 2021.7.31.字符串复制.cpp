# include<stdio.h>
int main(void)
{
   char a[100],b[100];
  char *p=a,*q=b;
   printf("请输入一个字符串:\n");
   gets(a);
   while(*p!='\0')
   {
       *q++=*p++;
   }
    *q='\0';
    printf("复制完的字符串为:\n");
	puts(b);
	return 0;
}