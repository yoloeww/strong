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
     printf("error\n");
	 exit(-1);
   }
   char stu[3][80],ch[80];
   int i,j,max;
   printf("input char:\n");
   for(i=0;i<3;i++)
	   gets(stu[i]);
   for(i=0;i<2;i++)
   {
	   max=i;
	   for(j=i+1;j<3;j++)\
	   {
	       if(strcmp(stu[j],stu[max])>0)
			   max=j;
	   }
     if(i!=max)
	 {
	       strcpy(ch,stu[i]);
		   strcpy(stu[i],stu[max]);
		   strcpy(stu[max],ch);
	 }
   }
   printf("new char:\n");
   for(i=0;i<3;i++)
   {
     fputs(stu[i],fp);
	 puts(stu[i]);
   }
   return 0;
} 
