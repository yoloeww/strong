# include<stdio.h>
int max(int a,int b)
{
   int temp;
   if(a>b)
	   temp=a;
   else
	   temp=b;
   for(int i=temp;i>0;i--)
   {
      if(a%i==0&&b%i==0)
		  break;
   }
   return i;
}
int min(int a,int b)
{
	return a/b;
}
int main(void)
{
	int a,b,c,d;
	printf("input a and b:\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	d=max(a,b);
	printf("���Լ��Ϊ%d\n",d);
    printf("��С������Ϊ%d\n",c/d);
	return 0;
   
}