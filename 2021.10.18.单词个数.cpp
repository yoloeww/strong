# include<stdio.h>
# include<string.h>
int main(void)
{
     char a[100];
	 int len;
	 int m=0,i;
	 printf("input char:\n");
	 scanf("%s",a);
	 len=strlen(a);
	 for(i=0;i<len;i++)
	 {

		 if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0'))
			 m++;
	 }
	 printf("num=%d",m);
	 return 0;
}