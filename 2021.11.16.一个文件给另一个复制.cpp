# include<stdio.h>
# include<stdlib.h>
# include<malloc.h>
# include<string.h>
int main(void)
{
   FILE *fp;
   fp=fopen("D:\\¹ÅÊ«.txt","r+");
   FILE *fp2=fopen("D:\\¹ÊÊÂ2.txt","w");
   if((fp||fp2)==NULL)
   {
     printf("error\n");
	 exit(-1);
   }
   char stu[3][80];
   int i;
   printf("new char:\n");
   for(i=0;i<3;i++)
   {
     fgets(stu[i],80,fp);
	 printf("%s",stu[i]);
   }
   printf("\n");
    for(i=0;i<3;i++)
   {
	 fputs(stu[i],fp2);
   }
   return 0;
} 
