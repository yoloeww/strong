# include<stdio.h>
int main(void)
{
   char a[100],b[100];
  char *p=a,*q=b;
   printf("������һ���ַ���:\n");
   gets(a);
   while(*p!='\0')
   {
       *q++=*p++;
   }
    *q='\0';
    printf("��������ַ���Ϊ:\n");
	puts(b);
	return 0;
}