# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# define N 3
# define M 100
int main(void)
{
   FILE *fp;
   int i;
   void sort(char a[N][M]);
   fp=fopen("D:\\¹ÅÊ«.txt","w");
   if(fp==NULL)
   {
       printf("´ò¿ªÊ§°Ü\n");
	   exit(-1);
   }
   char str [N][M];
   printf("input a char:\n");
   for(i=0;i<N;i++)
   {
   gets(str[i]);
   }
   sort(str);
   for(i=0;i<N;i++)
   {
	   printf("%s\n",str[i]);
	   fprintf(fp,"%s\n",str[i]);
   }
   return 0;
   
}
void sort(char a[N][M])
{
	int i,j;
	int len[N];
	for(i=0;i<N;i++)
	{
	   len[i]=strlen(a[i]);
	}
    for(i=0;i<N;i++)
	{
		for(j=len[i];j>0;j--)
		{
		   a[i][j]=a[i][j-1];
		}
		a[i][0]='#';
		a[i][len[i]+1]='\0';
	}
	 
}