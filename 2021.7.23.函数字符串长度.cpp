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
   printf("请输入一个字符串:\n");
   gets(a);
   puts(a);
   printf("该字符串长度为%d\n",length(a));
   return 0;

}