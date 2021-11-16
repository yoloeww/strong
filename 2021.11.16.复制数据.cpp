# include<stdio.h>
# include<stdlib.h>
# include<malloc.h>
# include<string.h>
int main(void)
{
    FILE *fp;
	fp=fopen("D:\\¹ÅÊ«.txt","w");
	if(fp==NULL)
	{
		exit(-1);
	}
	char ch;
	while((ch=getchar())!='#')
	{
	   fputc(ch,fp);
	}
     fclose(fp);
	 return 0;
} 