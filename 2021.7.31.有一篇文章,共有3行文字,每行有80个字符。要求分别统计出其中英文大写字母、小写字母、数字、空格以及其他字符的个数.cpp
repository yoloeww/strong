
# include<stdio.h>
int main(void)
{
   char a[3][80];
   int num[3]={0},space[3]={0},other[3]={0},big[3]={0},small[3]={0};
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
		   big[i]++;
	   else if(a[i][j]>='a'&&a[i][j]<='z')
		   small[i]++;
	   else if(a[i][j]>='0'&&a[i][j]<='9')
		    num[i]++;
	   else	if(a[i][j]==' ')
		    space[i]++;
	   else
			other[i]++;
	   }
	   for(i=0;i<3;i++)
	   {
		   printf("第%d行的字符如下:\n",i);
		     printf("大写字母个数为:%d\n",big[i]);
   printf("小写字母个数为:%d\n",small[i]);
   printf("数字个数为:%d\n",num[i]);
   printf("空格个数为:%d\n",space[i]);
   printf("其他字符个数为:%d\n",other[i]);
	   }
   return 0;

}