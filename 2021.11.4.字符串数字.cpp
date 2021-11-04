# include<stdio.h>
# include<string.h>
void find (char *p);
int main(void)
{
   char str[80];
   printf("input str:\n");
   gets(str);
   return 0;
}
void find(char *p)
{
	int i,num[10]={0},j=0,m=0;
	int flag=0;
	for(i=0;*(p+i)!='\0';i++)
		if(*(p+i)>='0'&&*(p+i)<='9')
	{
			m=m*10+(*(p+i)-'0');
			flag=1;
	}
		else
		{
		   if(flag==1)
		   {
		            num[j++]=m;
					m=0;
		   }
		   flag=0;
		}

num[j]='\0';
for(i=0;num[i]!='\0';i++)
{
	printf("%d\t",num[i]);
}
}