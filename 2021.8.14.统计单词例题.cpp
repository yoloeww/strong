# include<stdio.h>
int num(char *p)
{   
	int math=0;
       while(*p!='\0')
	   {
	       if((*p!=' '&&*(p+1)==' ')||(*p!=' '&&*(p+1)=='\0')) // 只要前面一个字符不为空格并且下一个字母为空格或者让'\0'那么是一个单词
			   math++;
		   p++;
	   }
	   return math;
}
int main(void)
{
   char a[100];
   printf("input a message:\n");
   gets(a);
   printf("sum=%d",num(a));
   putchar('\n');
   return 0;
}