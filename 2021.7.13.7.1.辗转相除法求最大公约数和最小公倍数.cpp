# include<stdio.h>
int max(int a,int b)
{
   int c;
   c=a%b;
   while(c!=0)
   {
      a=b;
	  b=c;
	  c=a%b;
   }
   return b;
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