# include<stdio.h>
int main(void)
{
   char a[3][80];
   int num=0,space=0,other=0,big=0,small=0;
   int i,j;
  
     for(i=0;i<3;i++)
	 {
		 printf("请输入第%d个字符串:\n",i+1);
		 gets(a[i]);
	 }
   for(i=0;i<3;i++)
	   for(j=0;j<80&&a[i][j]!='\0';j++)
	   {
	   if(a[i][j]>='A'&&a[i][j]<='Z')
		   big++;
	   else if(a[i][j]>='a'&&a[i][j]<='z')
		   small++;
	   else if(a[i][j]>='0'&&a[i][j]<='9')
		    num++;
	   else	if(a[i][j]==' ')
		    space++;
	   else
			other++;
	   }
	   
		     printf("大写字母个数为:%d\n",big);
             printf("小写字母个数为:%d\n",small);
             printf("数字个数为:%d\n",num);
             printf("空格个数为:%d\n",space);
		     printf("其他字符个数为:%d\n",other);
   return 0;
}