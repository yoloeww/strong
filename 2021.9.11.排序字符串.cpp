# include<stdio.h>
# define N 2
# include<string.h>
int main(void)
{
	void sort(char s[N][6]);
	int i;
	char str[N][6];
	printf("input ten number:\n");
	for(i=0;i<N;i++)
	 gets(str[i]);
	sort(str);
	for(i=0;i<N;i++)
		puts(str[i]);
	return 0;
}
void sort(char s[N][6])
{

	int i,j;
	char *t,temp[6];
	t=temp;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
		{
		    if(strcmp(s[j],s[j+1])>0)
			{
			     strcpy(t,s[j]);
				 strcpy(s[j],s[j+1]);
				 strcpy(s[j],t);			
			}
		}
}