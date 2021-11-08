# include<stdio.h>
int main(void)
{
	char str[];
	int i,s=0;
	printf("input str:\n");
	gets(str);
	for(str%10!='\0')
	{
	    i=str%10+'0';
		s+=i*10;
	}
   
}