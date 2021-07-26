# include<stdio.h>
int strcmp(char *s1,char *s2)
{
	int k;
while(*s1!='\0'&&*s2!='\0')
{
if(*s1!=*s2)
   k=*s1-*s2;
else
   k=0;
 s1++;
 s2++;
}
 return k;
}
int main(void)
{
	char str1[100],str2[100];
	printf("ÇëÊäÈëÁ½¸ö×Ö·û´®:\n");
	gets(str1);
	gets(str2);
	printf("result is %d\n",strcmp(str1,str2));
	return 0;
}