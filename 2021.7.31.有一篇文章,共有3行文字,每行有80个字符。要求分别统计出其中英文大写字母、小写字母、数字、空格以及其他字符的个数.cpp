
# include<stdio.h>
int main(void)
{
   char a[3][80];
   int num[3]={0},space[3]={0},other[3]={0},big[3]={0},small[3]={0};
   int i,j;
  
     for(i=0;i<3;i++)
	 {
		 printf("�������%d���ַ���:\n",i+1);
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
		   printf("��%d�е��ַ�����:\n",i);
		     printf("��д��ĸ����Ϊ:%d\n",big[i]);
   printf("Сд��ĸ����Ϊ:%d\n",small[i]);
   printf("���ָ���Ϊ:%d\n",num[i]);
   printf("�ո����Ϊ:%d\n",space[i]);
   printf("�����ַ�����Ϊ:%d\n",other[i]);
	   }
   return 0;

}