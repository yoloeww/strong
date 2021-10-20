# include<stdio.h>
# include<string.h>
int main(void)
{
   char str[3][80];
   char string[80];
   int i;
   for(i=0;i<3;i++)
	   scanf("%s",str[i]);
   if(strcmp(str[1],str[2])>0)
	   strcpy(string,str[1]);
   else
	   strcpy(string,str[2]);
   if(strcmp(str[3],string)>0)
	   strcpy(string,str[3]);
   printf("max=%s\n",string);
   return 0;
  
}