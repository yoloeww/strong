# include<stdio.h>
# include<string.h>
int main(void)
{
	void sort(char (*s)[6]);
	int i;
	char str[10][6];
	char (*p)[6];
	printf("input ten number:\n");
	for(i=0;i<10;i++)
		scanf("%s",str[i]);
	p=str;
	sort(p);
	for(i=0;i<10;i++)
		puts(str[i]);
	return 0;
}
void sort(char (*s)[6])
{

	int i,j;
	char *t,temp[6];
	t=temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{
		    if(strcmp(s[j],s[j+1]>0))
			{
			     strcpy(t,s[j]);
				 strcpy(s[j],s[j+1]);
				 strcpy(s[j],t);			
			}
		}
}