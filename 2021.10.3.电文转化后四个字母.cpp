# include<stdio.h>
int main(void)
{
    char ch;
	printf("input lessage:\n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z')
	{
		if(ch>='a'&&ch<='v'||ch>='A'&&ch<='V')
	     printf("%c\n",ch+4);
		if(ch>'v'&&ch<='z'||ch>'V'&&ch<='Z')
	     printf("%c\n",ch-22);
	}
	return 0;
	  
}