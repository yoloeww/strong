# include<stdio.h>
int main(void)
{
   char *p,a[100];
   int big=0,small=0,space=0,num=0,other=0;
   printf("请输入一个字符串:\n");
   gets(a);
   p=a;
   while(*p!='\0')
   {
       if(*p==' ')
		   space++;
	   else if(*p>='A'&&*p<='Z')
		   big++;
	   else if(*p>='a'&&*p<='z')
		   small++;
	   else if(*p>='0'&&*p<='9')
		    num++;
	   else	  
			other++;
	   p++;
   }
   printf("大写字母个数为:%d\n",big);
   printf("小写字母个数为:%d\n",small);
   printf("数字个数为:%d\n",num);
   printf("空格个数为:%d\n",space);
   printf("其他字符个数为:%d\n",other);
   return 0;
}