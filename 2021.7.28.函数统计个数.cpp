# include<stdio.h>
void fun(char *p,int *space,int *big,int *small,int *num, int*other)
{
      while(*p!='\0')
   {
       if(*p==' ')
		   (*space)++;
	   else if(*p>='A'&&*p<='Z')
		   (*big)++;
	   else if(*p>='a'&&*p<='z')
		   (*small)++;
	   else if(*p>='0'&&*p<='9')
		    (*num)++;
	   else	  
			(*other)++;
	   p++;
   }
}
int main(void)
{
char a[100];
   int big=0,small=0,space=0,num=0,other=0;
   printf("������һ���ַ���:\n");
   gets(a);
   fun(a,&space,&big,&small,&num,&other);
   printf("��д��ĸ����Ϊ:%d\n",big);
   printf("Сд��ĸ����Ϊ:%d\n",small);
   printf("���ָ���Ϊ:%d\n",num);
   printf("�ո����Ϊ:%d\n",space);
   printf("�����ַ�����Ϊ:%d\n",other);
   return 0;
}