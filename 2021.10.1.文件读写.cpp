# include<stdio.h>
# include<stdlib.h>
int main(void)
{
   char name[50]="D:\\����.txt";
   FILE *fp=fopen(name,"r");  
   if(fp==NULL)
   {
	  printf("���ļ�ʧ��\n");
	  exit(-1);
   }
   FILE *fp2=fopen("D:\\����2.txt","w"); 
   if(fp2==NULL)
   {
	  printf("���ļ�ʧ��\n");
	  exit(-1);
   }
   char ch;
   while((ch=fgetc(fp))!=EOF)
	     fputc(ch,fp2);
   fclose(fp);
   fclose(fp2);
   return 0;
}
