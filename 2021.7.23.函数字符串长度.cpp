# include<stdio.h>
int length (char p[])
{

   int i=0;
   while(*p!='\0')
   {
     p++;
	 i++;
   }
   return i;
}
int main(void)
{
   char a[100];
   printf("������һ���ַ���:\n");
   gets(a);
   puts(a);
   printf("���ַ�������Ϊ%d\n",length(a));
   return 0;

}