# include<stdio.h>
int main(void)
{
   char s;
   printf("input a char :\n");
   while((s=getchar())!='\n')
   {
   if(s>='A'&&s<='Z'||s>='a'&&s<='z')
   {
	   if(s>='A'&&s<='V'||s>='a'&&s<='v')
		   printf("%c\n",s+4);
	   if(s>='W'&&s<='Z'||s>='w'&&s<='z')
		   printf("%c\n",s-22);
   }
   }
   return 0;

}