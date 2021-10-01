# include<stdio.h>
# include<stdlib.h>
int main(void)
{
   char name[50]="D:\\故事.txt";
   FILE *fp=fopen(name,"r");  
   if(fp==NULL)
   {
	  printf("打开文件失败\n");
	  exit(-1);
   }
   FILE *fp2=fopen("D:\\故事2.txt","w"); 
   if(fp2==NULL)
   {
	  printf("打开文件失败\n");
	  exit(-1);
   }
   char ch;
   while((ch=fgetc(fp))!=EOF)
	     fputc(ch,fp2);
   fclose(fp);
   fclose(fp2);
   return 0;
}
