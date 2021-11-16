# include<stdio.h>
# include<stdlib.h>
# include<malloc.h>
# include<string.h>
int main(void)
{
   FILE *fp;
   fp=fopen("D:\\古诗.txt","w");
   if(fp==NULL)
   {
     printf("error\n");
	 exit(-1);
   }
   char stu[3][80],ch[80];
   int i,j,max;
   printf("input char:\n");
   for(i=0;i<3;i++)
	   gets(stu[i]);
   printf("new char:\n");
   for(i=0;i<3;i++)
   {
     fputs(stu[i],fp);
	 puts(stu[i]);
   }
   return 0;
} 
