# include<stdio.h>
int num(char *p)
{   
	int math=0;
       while(*p!='\0')
	   {
	       if((*p!=' '&&*(p+1)==' ')||(*p!=' '&&*(p+1)=='\0')) // ֻҪǰ��һ���ַ���Ϊ�ո�����һ����ĸΪ�ո������'\0'��ô��һ������
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